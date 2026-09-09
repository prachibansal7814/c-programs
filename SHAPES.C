#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int choice;
float x,y;
while(1)
{
printf("\n1.square");
printf("\n2.rectangle");
printf("\n3.circle");
printf("\n4.right angled triangle");
printf("\n5.exit");
printf("\nenter the number whose area you wanted yo find");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nenter the side of square");
scanf("%f",&x);
printf("\nthe area of square of side %f is %f",x,x*x);
break;
case 2:
printf("\nenter the length and breadth of rectangle");
scanf("%f%f",&x,&y);
printf("\nthe area of rectangle is %f",x*y);
break;
case 3:
printf("\nenter the radius of circle");
scanf("%f",&x);
printf("\nthe area of circle with radius %f is %f",x,3.14*x*x);
break;
case 4:
printf("\nenter the height and base of triangle");
scanf("%f%f",&x,&y);
printf("\nthe area of right angled triangle is %f",0.5*x*y);
break;
case 5:
exit(0);
default:
printf("\nchoice invalid");
}
}
}