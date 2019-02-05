#include <stdio.h>
int main()
{
	float v, h, area;
	char res;
	do {
		printf("dose vasi, ypsos : ");
		scanf_s("%f%f", &v, &h);
		area = v * h / 2;
		printf("trig me vasi %f kai ypsos %f exei emvadon %f\n",v, h, area);
		fflush(stdin);
		printf("ypologismos neoy trigonou (Y=nai)?");
		scanf_s("%c", &res);
	} while (res == 'Y');
	return 0;
	system("PAUSE");
}
