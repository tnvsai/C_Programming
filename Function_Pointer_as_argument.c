#include <stdio.h>
void Hello_world()
{
    printf("Hello World in function");
}
void Call_Hello(void(*funp)())
{
    funp();
}

int main()
{
    void(*ptr)()=Hello_world;
    Call_Hello(ptr);
    //Call_Hello(Hello_world);

    return 0;
}

