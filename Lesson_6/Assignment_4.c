#include <stdio.h>
int main()
{
	int i,j,k,max,min;
	printf("dwse treis akeraious arithmous\n");
	scanf("%d%d%d",&i,&j,&k);
	max= ((i>j)&&(i>k))?i:((j>i)&(j>k))?j:k;
	min= ((i<j)&&(i<k))?i:((j<i)&(j<k))?j:k;
	printf ("o megistos einai %d kai o elaxistos einai %d",max,min);
	return 0;
}
