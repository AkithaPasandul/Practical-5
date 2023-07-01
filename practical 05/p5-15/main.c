#include <stdio.h>
int main() {
  int i,arr[10],evenc=0;
  for(i=0;i<10;i++)
    {
        printf("Enter %d integers",i=1);
        scanf("%d", &arr[i]);
        if (arr[i]%2 ==0)
        evenc++;
    }
  printf("The number of even numbers in the array is %d\n",evenc);
}
