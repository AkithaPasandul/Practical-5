#include <stdlib.h>
int main()
{
    int fib1=0,fib2=1,fib3,i;
    printf("First 10 Fibonacci numbers are\n");
    for(i=0;i<=10;i++)
    {
        fib3=fib1+fib2;
        printf("%d ",fib3);
        fib1=fib2;
        fib2=fib3;
    }
    printf("\n");
}
