#include <stdio.h>
double sum_cube(int num);
int main()
{
  int i;

  do
  {
    printf("enter number : \n");
    scanf("%d",&i);
  } while(i<0 || i>1000);
  printf("Result =  %.0f\n",sum_cube(i));
  return 0;
}
double sum_cube (int num)
  {
    int i;
    double sum;
    sum=0;
    for (i=1; i<=num; i++)
    {
      sum +=i*i*i;
    }
    return sum;
  }
