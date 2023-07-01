#include <stdio.h>
int main()
{
  int i,no,Positive=0,Negative=0,Zero=0;
  for (i=0;i<10;i++)
  {
    printf("Enter number");
    scanf("%d",&no);
    if(no>0)
      Positive++;
     else if(no< 0)
      Negative++;
     else
      Zero++;
  }
  printf("\nNumber of positive numbers: %d\n",Positive);
  printf("Number of negative numbers: %d\n",Negative);
  printf("Number of zeros: %d\n",Zero);
}
