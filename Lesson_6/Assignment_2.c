#include <stdio.h>
int main()
{
	int xp,ap,ep;
	printf("dwse ta xronia proipiresias:\n");
	scanf("%d",&xp);
	printf("dwse ta paidia\n");
	scanf("%d",&ap);
	if (xp<=10)
	
		if(ap<=2) ep=70;
		else if (ap<=4) ep=90;
		else ep = 30*ap;
	else 
		if (ap<=2) ep=100;
		else if (ap<=4) ep=150;
		else ep= ap*50;	
	
	printf ("epidoma : %d",ep);
	return 0;
}

