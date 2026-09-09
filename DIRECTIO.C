#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int choice;
printf("enter a number from 1 to 4");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("north");
break;
case 2:
printf("south");
break;
case 3:
printf("east");
break;
case 4:
printf("west");
break;
default:
printf("choice invalid");
break;
}
getch();
}
