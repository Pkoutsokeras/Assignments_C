#include <stdio.h>
void show_char(int num,char);
int main()
{
  char ch;
  int i;
  printf("enter character : \n");
  scanf("%c",&ch);
  printf ("enter number:\n");
  scanf("%d",&i);
  show_char(i,ch);
  return 0;
}
void show_char(int num,char ch)
{
  int i;
  for (i=0; i<num; i++)
    printf("%c\n",ch);
}
