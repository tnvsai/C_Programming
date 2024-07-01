
#include <stdio.h>
#include <stdint.h>

uint8_t *text = "1.Pra / 2.Bha / 3.sss";

uint8_t textSplit[3][10];

void UpdateLines(uint8_t *lText_u8)
{
    uint32_t i = 0,Lines_u8 = 0,j=0;
    while(lText_u8[i] != '\0')
    {
        if(lText_u8[j] == '/')
        {
            textSplit[Lines_u8][j] = '\0';
            Lines_u8++;
            j = 0;
            
        }
        else
        {
            textSplit[Lines_u8][j] = lText_u8[i];
            j++;
        }
        i++;
        
    }
}

void PrintLine(uint8_t line)
{
    printf("%s", textSplit[line-1]);
}

int main()
{
    // printf("Hello World");
    UpdateLines(text);
    PrintLine(3);
    return 0;
}
