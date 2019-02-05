#include <stdio.h>
int main()
{
	int i,j,k,min,max;
	printf("dwse times ");
	scanf("%d %d %d",&i,&j,&k);
	min = i*((i<j)&&(i<k)) + j*((j<i)&&(j<k)) + k*((k<i)&&(k<j));
	max = i*((i>j)&&(i>k))+j*((j>i)&&(j>k))+k*((k>i)&&(k>j));
	printf("min = %d max = %d\n",min,max);
	return 0;
}
