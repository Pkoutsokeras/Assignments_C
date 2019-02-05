#include <stdio.h>
int main()
{
	int i,sum;
	float avg;
	sum=0;
	for(i=1; i<=17; i++)
	{
		sum += i;
		printf("%i\n",i);
	}
avg = (float)sum/17;
printf("athroisma :%i\n",sum);
printf("mesos oros: %f\n",avg);
return 0;
}

