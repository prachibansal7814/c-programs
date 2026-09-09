#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c,d,e;
printf("enter the marks of all 5 subjects");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
printf("the average of all 5 subjects is %f",(a+b+c+d+e)/5);
getch();
}