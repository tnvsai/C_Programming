
#include <stdio.h>
#include <stdint.h>
#include <string.h>

void ReverseSentance(uint8_t *input, uint8_t *output);
int main() {
    uint8_t a[]= "one two three four", b[20] = {0};

    ReverseSentance(&a[0], &b[0]);
    printf("%s",b);

    return 0;
}

void ReverseSentance(uint8_t *input, uint8_t *output)
{
    uint32_t len = strlen(input);
    uint32_t start=0, end=len-1,j=0;
    int32_t i = 0;
    for(i=len-1; i>=0; i--)
    {
        if(input[i] == ' ')
        {
            start = (start == 0)?i+1:i;
            for(;start<=end; start++)
            {
                output[j] = input[start];
                j++;
            }
            end = i-1;
        }
    }
    start=0;
    output[j] = ' ';
    j++;
    for(i=0; i<len; i++)
    {
        if(input[i] == ' ')
        {
            end = i;
        }
        for(;start<=end; start++)
        {
            output[j] = input[start];
            j++;
        }
        break;
    }
    output[j] = '\0';
}