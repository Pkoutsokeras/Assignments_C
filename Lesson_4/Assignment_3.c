#include <stdio.h>
int main()
{
	int i,j,min,max;
	printf("dwse times : ");
	scanf("%d,%d,",&i,&j);
	min = i*(i<j) + j*(j<i);
	max = i*(j>i) + j*(j>i);
	printf ("min = %d , max = %d ",min,max);
	return 0;
}
