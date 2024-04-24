#include <stdio.h>
#include <stdint.h>
void Fibonacci(int num);

int main()
{
    Fibonacci(11);

    return 0;
}

void Fibonacci(int num)
{
    int a = 0, b= 1, temp = 0;
    printf("%d\n",a);
    printf("%d\n",b);
    num=num-2;
    while (num != 0)
    {
        printf("%d\n",(temp = a+b));
        a=b;
        b=temp;
        num--;
        
    }
    
}
