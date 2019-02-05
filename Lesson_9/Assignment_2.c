#include <stdio.h>
int main()
{
	float ari=0,pl=0,v,mo,ar,min=10,max=0;
	char a;
	do{
		printf("dwse thn vathmologia:");
		scanf("%f",&v);
		pl=pl+1;
		ari=ari+v;
		if(v<min)
		{
			min=v;
			if(v>max)
			max=v;
		}
		fflush(stdin);
		printf("allh vathmologia(nai=y h Y);");
		scanf("%c",&a);
	}while((a=="y")||(a=="Y"));
	mo=ari/pl;
	printf("megisti vathmologia einai %.2f h elaxisth vathmologia einai: %.2f",max,min);
	printf("to athrisma einai : %.2f kai o mesos oros : %.2f",ari,mo);
	return 0;
}
