#include <stdio.h>
int main()
{
	int x, sth = 0, sar = 0, pth = 0, par = 0;
	float mth, mar;
	printf("Dose timi:");
	scanf_s("%i", &x);
	while (x != 0)
	{
		if (x > 0)
		{
			sth += x;
			pth++;
		}
		else
		{
			sar += x;
			par++;
		}
		printf("dose timi:");
		scanf_s("%i", &x);

	}
	if (pth != 0)
	{
		mth = (float)sth / pth;
		printf("MO thetikon : %f\n", mth);
	}
	if (par != 0)
	{
		mar = (float)sar / par;
		printf("MO arnition %f\n", mar);
	}
	return 0;
}
