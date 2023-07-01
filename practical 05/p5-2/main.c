#include <stdio.h>
int main()
{
    int counter=1;
    float total=0,mark,ave;
    while(counter<=10)
    {
        printf("Enter the mark");
        scanf("%f",&mark);
        total=total+mark;
        counter++;
    }
    printf("The total is %.2f",total);
    ave=total/10;
    printf("The average is %.2f\n",ave);
    if(ave<50)
        printf("Faile\n");
    else
        printf("Pass\n");
}
