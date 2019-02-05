#include <stdio.h>
float area(float radius);
int main()
{
  float len;
  do {
    printf("Enter radius:\n");
    scanf("%f",&len);
  } while(len <=0);
  printf("Circle area is %.2f\n",area(len));
  return 0;
}
float area(float radius)
{
  return 3.14*radius*radius;
}
