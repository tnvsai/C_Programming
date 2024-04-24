#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

bool palindrome(char* str);

int main()
{
    uint8_t name[] = "ssss";
    palindrome(name)?printf("yes palindrome"):printf("Not palindrome");
    return 0;
}

bool palindrome(char* str)
{
    uint32_t len = strlen(str) - 1;
    static uint32_t index = 0;
    while (len != index)
    {
        if (str[index] != str[len])
        {
            return false;
        }
        index++;
        len--;
        printf("\n%d",loop);
    }
    return true;
        
 }
