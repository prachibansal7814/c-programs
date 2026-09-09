#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,fact=1;
printf("enter any number");
scanf("%d",&y);
x=y;
while(x>0)
{
fact=fact*x;
x--;
}
printf("the factorial of %d is %d",y,fact);
getch();
}
