#include <stdio.h>
int main()
{
	int n,i;
	float sum;
	printf("dwse N:\n");
	scanf("%i",&n);
	sum = 0;
	for (i=1;i<=n; i++)
	{
		sum += (float)1/i;
	}
	printf("athroisma: %f\n",sum);
	
	return 0;
}

