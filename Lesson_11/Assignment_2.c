#include <stdio.h>
#define size 4
int main()
{
  int i;
  float arr[size],sum,minm=0,min;
  for(i=0;i<size;i++)
    {
      printf("dwse esoda upallilou gia ton mina %d :\n",i+1);
      scanf("%f",&arr[i]);
      while (arr[i]<0)
      {
        printf("lathos! dwse thetiktes times gia ton ypalilo %d",i+1);
        scanf("%f",&arr[i]);
      }
    }

    min=arr[0];
    sum=0;
    for(i=0;i<size;i++)
    {
    sum +=arr[i];
    if (arr[i]<min)
    {
      min=arr[i];
      minm=i;
    }
  }
    printf("synolika ethsia esoda : %.2f\n",sum);
    printf("to mikrotero einai : %.2f\n",min);
    return 0;
}
