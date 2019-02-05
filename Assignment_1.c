#include <stdio.h>
int main()
{
	int x,e,d,m;

	printf("dwse psifio : ");
	scanf("%d",&x);
	e = x/100;
	d = (x%100)/100;
	m = (x%10)/1;
	printf("psifia: %d,%d,%d",e,d,m);
	return 0;
}
