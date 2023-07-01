#include <stdlib.h>
int main()
{
    int num,originalNum,remainder,count=0,result=0;
    printf("Enter a number:");
    scanf("%d",&num);
    originalNum-num;
    while(originalNum !=0)
    {
        remainder=originalNum%10;
        count++;
        originalNum/=10;
    }
    if(result==num)
    {
        printf("%d is an Armstrong number.\n",num);
    }
        else
        {
            printf("%d is not Armstrong number.\n",num);
        }

}
