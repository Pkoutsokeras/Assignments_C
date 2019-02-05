#include <stdio.h>
int main()
{
	int h1,m1,s1,sec1;
	int h2,m2,s2,sec2;
	int ht,mt,st,diaf;
	printf("Dose proti ora :");
	scanf("%d:%d:%d",&h1,&m1,&s1);
	printf("Dose deuteri ora :");
	scanf("%d:%d:%d",&h2,&m2,&s2);
	sec1 = 3600*h1 + 60*m1 + s1;
	sec2 = 3600*h2 + 60*m2 + s2;
	diaf = sec1 - sec2;
	ht = diaf/3600;
	mt = (diaf%3600)/60;
	st = diaf%60;
	printf("diafora %02d:%02d:%02d",ht,mt,st);
	return 0;
}
