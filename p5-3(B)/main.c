#include <stdio.h>
int main()
{
  int i,count=0,prices[10];
  float average;
  for (i=0;i<10;i++)
    {
    printf("Enter the price of item %d",i+1);
    scanf("%d",&prices[i]);
    }
  for (i=0;i<10;i++)
    {
    average += prices[i];
    }
  average /= 10;
  for (i=0;i<10;i++)
  {
    if (prices[i] > 200)
      count++;
  }
  printf("The average price is %.2f\n", average);
  printf("There are %d items whose price is greater than 200\n",count);
}
