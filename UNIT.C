#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int x,choice;
clrscr();
while(1)
{
printf("\nunit converter");
printf("\n1.km to m");
printf("\n2.m to cm");
printf("\n3.cm to mm");
printf("\n4.ft to inch");
printf("\n5.yard to feet");
printf("\n6.kg to gm");
printf("\n7.exit");
printf("\nenter the number which unit converter you want to use");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nenter the value in km");
scanf("%d",&x);
printf("\n%dkm=%dm",x,1000*x);
break;
case 2:
printf("\nenter the value in m");
scanf("%d",&x);
printf("\n%dm=%dcm",x,100*x);
break;
case 3:
printf("\nenter the value in cm");
scanf("%d",&x);
printf("\n%dcm=%dmm",x,10*x);
break;
case 4:
printf("\nenter the value in ft");
scanf("%d",&x);
printf("\n%dft=%dinch",x,12*x);
break;
case 5:
printf("\nenter the value in yard");
scanf("%d",&x);
printf("\n%dyard=%dfeet",x,3*x);
break;
case 6:
printf("\nenter the value in kg");
scanf("%d",&x);
printf("\n%dkg=%dgm",x,1000*x);
break;
case 7:
exit(0);
break;
default:
printf("\nchoice invalid");
}
}
}