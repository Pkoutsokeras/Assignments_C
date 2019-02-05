#include <stdio.h>
int main()
{
	float a, b, c,sum,mo;
	printf("Dose 3 epidoseis tou athliti : \n");
	scanf("%f %f %f",&a, &b, &c);
	sum = a + b + c;
	mo = sum/3;
	printf("mesi timh : %f\n", mo);
	if (mo > 8)
	{
		printf("prokrithike");
		
	}
	return 0;
}

