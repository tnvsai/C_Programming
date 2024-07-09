#include <stdio.h>
#include<stdint.h>
#include<string.h>

uint8_t* ReverseSentence(uint8_t* str)
{
    uint16_t len = strlen(str);
    uint8_t RevArr[100],start=0,end=len-1, index=len-1;
    while(index>0)
    {
        if(str[index] == ' ')
        {
            uint16_t temp = index+1;
            
            while(temp<=end)
            {
                RevArr[start] = str[temp];
                temp++;
                start++;
            }
            RevArr[start] = ' ';
            start++;
            end = index-1;
        }
        index--;
    }
    index=0;
    while(str[index]!=' ')
    {
        RevArr[start] = str[index];
        start++;
        index++;
    }
    
    RevArr[len] = '\0';
    start=0;
    while(start<len)
    {
        str[start] = RevArr[start];
        start++;
    }
    return &str[0];
    
}
int main()
{
    uint8_t str[] = "sa ri ga ma pa";
    uint8_t a;
    uint8_t * ch = &a;
    
   ch = ReverseSentence(str);
   while(*ch != '\0')
   {
    printf("%c",*ch);
    *ch++;
   }

    return 0;
}
