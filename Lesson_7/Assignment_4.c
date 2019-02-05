#include <stdio.h>
int main()
{
	int i,paid,epid;
	float mi,tm;
	for (i=1; i<=5;i++) 
	{
		printf("dwse ton mistho kai ton arithmo paidiwn:\n");
		scanf_s("%f%i",&mi,&paid);
		if(paid<3)
		{
			epid= 30*paid;
		}
		else
		{
			epid=90*+40*(paid-3);
		}
	}
		tm= mi+epid;
	printf("epidoma : %i\n",epid);
	printf("misthos : %f",tm);
	system("pause");
	return 0;
}