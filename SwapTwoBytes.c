#include <stdio.h>
#include<stdint.h>
uint16_t ReverseNumber(uint16_t Number_u16);

int main()
{
    printf("%x",ReverseNumber(0xABCD)); //0xAB CD

    return 0;
}

uint16_t ReverseNumber(uint16_t Number_u16)
{
    return ((Number_u16 & 0x00FF) << 8) | (Number_u16>>8);
}
