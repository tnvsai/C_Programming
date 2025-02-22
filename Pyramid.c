// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

void PrintPyramid(int32_t num);

int main() {
    int32_t size;
    printf("enter size of pyramid");
    scanf("%d", &size);
  PrintPyramid(size);

    return 0;
}

void PrintPyramid(int32_t num)
{
    int32_t temp=0,space=0,star=1,reset=1;
    {
        space=num-1;
        while(space>=0)
        {
            printf(" ");
            space--;
        }
        star=reset;
        while(star>0)
        {
            printf("*");
            star--;
        }
        printf("\n");
        reset+=2;
        num--;
        
    }
}