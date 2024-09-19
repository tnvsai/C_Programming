
#include <stdio.h>
#include <stdint.h>


uint32_t Hex2Dec(uint8_t *str)
{
    uint8_t HexValues[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    uint32_t Decimal=0;
    while(*str!='\0')
    {
        if(*str>=96)
        *str = *str-32;
        for(uint8_t i=0; i<16; i++)
        {
            if(*str == HexValues[i])
            {
                Decimal = ((Decimal+i)<<4);
            }
        }
        str++;
    }
    return Decimal>>4;
}
int main()
{
    uint8_t HexStr[] = "12a";

    printf("%d", Hex2Dec(&HexStr[0]));

    return 0;
}
/*************************************************************
method 2
***************************************************************/

#include <stdio.h>
#include <stdint.h>


uint32_t Hex2Dec(uint8_t *str)
{
    uint32_t Decimal = 0;
    
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9') )//0-1
        {
            Decimal = (Decimal+(*str-'0'))<<4;
        }
        else if((*str >= 'A') && (*str <= 'F')) //A-F
        {
            Decimal = (Decimal+(*str-'A'))<<4;
        }
        else if((*str >= 'a') && (*str <= 'f')) //a-f
        {
            Decimal = (Decimal+(*str-'a'))<<4;
        }
        str++;
    }
    return Decimal>>4;
    
}
int main()
{
   uint8_t HexStr[] = "12";

    printf("%d", Hex2Dec(&HexStr[0]));

    return 0;
}

