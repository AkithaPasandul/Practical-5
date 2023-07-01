#include <stdio.h>
int main()
{
    int exp,b,power=0;
    printf("Enter the base:");
    scanf("%d",&b);
    printf("Enter the exponent:");
    scanf("%d",&exp);
    for(int i=0;i<=exp;i++)
    {
        power*=b;
    }
    printf("The %dth power of %d is:%d\n",exp,b,power);
}

