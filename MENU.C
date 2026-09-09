#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int choice;
printf("drinks menu");
printf("\n1.tea");
printf("\n2.coffee");
printf("\n3.juice");
printf("\n4.water");
printf("\nenter the number of desired drink");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("tea");
break;
case 2:
printf("coffee");
break;
case 3:
printf("juice");
break;
case 4:
printf("water");
break;
default:
printf("choice invalid");
break;
}
getch();
}