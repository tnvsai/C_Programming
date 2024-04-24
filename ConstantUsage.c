#include <stdio.h>

int main()
{
    int a = 10;
    // const int*i;
    int* const i = &a;
    
    int b = 55;
    // i = &a;
    // i = &b;
    *i=22;
    printf("Hello World: %d", *i);

    return 0;
}
