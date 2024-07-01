#include <stdio.h>
#include<stdint.h>
uint32_t ReverseNumber(uint32_t Number_u32);

int main()
{
    printf("%x",ReverseNumber(0xABCD1122)); //0xAB CD 11 22

    return 0;
}

uint32_t ReverseNumber(uint32_t Number_u32)
{
    uint32_t ReversedNum_u32 = 0,Temp_u32=0,i;
    for(i=0; i<4; i++)
    {
        Temp_u32 = (Number_u32&0xFF);
        ReversedNum_u32 = (ReversedNum_u32<<8) | (Temp_u32);
        Number_u32=(Number_u32>>8);
    }
    
    return ReversedNum_u32;
}
