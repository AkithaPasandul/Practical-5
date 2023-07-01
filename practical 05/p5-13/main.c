#include <stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter the number(-1 to quit)");
    scanf("%d",&n);
    while(n!=-1)
    {
        sum=sum+n;
        printf("Enter the number(-1 to quit)");
        scanf("%d",&n);
    }
    printf("The sum is %d\n",sum);
}
