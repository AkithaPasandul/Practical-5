#include <stdio.h>
int main()
{
  int eno,count=0;
  float bs;
  printf("Enter the employee no and basic salary(-999 to stop)");
  scanf("%d %f", &eno, &bs);
  while (eno!=-999)
    {
    if(bs>=5000)
      count++;
    printf("Enter the employee no and basic salary: ");
    scanf("%d %f", &eno, &bs);
    }
  printf("There are %d employees whose basic salary is >=5000\n",count);
}
