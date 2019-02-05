#include <stdio.h>
int main()
{
	int i;
	float tp,tm,r;
	for (i=1; i<=5; i++)
{
	printf("dwse timi kai m2:");
	scanf("%f\n%f",&tp,&tm);
	r = tp/tm;
	if (r<250)
	{
		printf("Ftino\n");
	}
	else if (r>500)
	{
		printf("akrivo\n");
	}
	else
	{
		printf("kanoniko\n");
	}
}
return 0;
}
