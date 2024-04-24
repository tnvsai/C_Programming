#include <stdio.h>
#include <stdbool.h>

bool sqareTwo(int num);

int main()
{
    printf("Hello World: %d ",ChecksqareTwo(1080));

    return 0;
}

bool ChecksqareTwo(int num)
{
    unsigned int mul = 1;
    for (int i = 0; i < 32; i++)
    {
        if (num == (mul << i))
        {
            return true;
        }
    }
    return false;
}
