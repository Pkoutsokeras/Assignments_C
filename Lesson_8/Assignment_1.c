#include <stdio.h>
int main()
{
	float timi, synolo;
	printf("dwse timi proiontos: ");
	scanf_s("%f", &timi);
	synolo = 0;
	while (timi != 0)
	{
		synolo += timi;
		printf("dwse timi proiontos: ");
		scanf_s("%f", &timi);
	}
	printf("pliroteo poso : %.2f", synolo);
	system("pause");
	return 0;
}
