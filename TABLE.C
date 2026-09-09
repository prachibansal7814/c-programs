#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x=1,y;
printf("enter a number");
scanf("%d",&y);
while(x<=10)
{
printf("%d*%d=%d\n",y,x,y*x);
x++;
}
getch();
}