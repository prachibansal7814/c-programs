#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int a,b,choice;
printf("enter any two number");
scanf("%d",&a);
scanf("%d",&b);
while(1)
{
printf("\n1.addition");
printf("\n2.subtraction");
printf("\n3.multiply");
printf("\n4.divide");
printf("\n5.remainder");
printf("\n6.exit");

scanf("%d",&choice);
switch(choice)
{
case 1:
printf("sum of numbers is %d",a+b);
break;
case 2:
printf("difference of number is %d",a-b);
break;
case 3:
printf("multiplication of two number is %d",a*b);
break;
case 4:
printf("division of two number is %d",a/b);
break;
case 5:
printf("remainder when two number are divided is %d",a%b);
break;
case 6:
exit (0);
break;
default:
printf("invalid choice");
break;
}
}
getch();
}
