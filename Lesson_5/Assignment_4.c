#include <stdio.h>
int main()
{
	float a,b; 
	//a=dioksidio b=azoto
	printf("dwse th timh tou Dioksidiou tou anthraka kai tou azotou\n");
	scanf("%f %f",&a,&b);
	if (a<0.35)
	{
		printf("KATHARI\n");
	}
	else
	{
		printf("MOLUNSMENI\n");
	}
	if (b<0.17)
	{
		printf("DIAUGIS\n");
	}
	else 
	{
		printf("ADIAUGIS\n");
	}
	return 0;
}

