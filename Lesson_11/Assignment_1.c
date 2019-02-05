#include <stdio.h>
#define size 3
int main(void)
{
  int i;
  float arr[size],sum,max;
  for(i=0;i<size;i++)
  {
    printf("Dwse monades xrewshs syndromith:");
    scanf("%f",&arr[i]);
  }
  sum=0,max=0;
  for (i=0;i<size;i++)
  {
    sum +=arr[i];
    if(arr[i]>max)
      max=arr[i];
  }
  printf("oi synolikes monades xreoshs einai : %.2f\n",sum);
  printf("To megisto einai %.2f\n",max);
  return 0;
}
