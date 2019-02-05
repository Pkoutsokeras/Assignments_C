#include <stdio.h>
int main()
{
	float weight,height,age,dms;
	printf ("dwse varos,ypsos,kai tin ilikia tou atomou\n");
	scanf("%f%f%f",&weight,&height,&age);
	if (age<=18)
	printf("den isxyei o deiktis mazas somatos");
	else
	{
		dms=weight/(height*height);
		printf("O deiktis mazas somatos einai %f\n",dms);
		if (dms>=30)
		printf("Ypervaro atomo");
		else if (dms>=25)
		printf("varu atomo");
		else if (dms>=18.5)
		printf("kanoniko atomo");
		else printf("adynato atomo");
	}
	return 0;
}
