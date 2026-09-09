#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c,d,e;
printf("enter the marks obtained in all 5 subjects");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
printf("the percentage of marks obtained is %f",((a+b+c+d+e)*100)/500);
getch();
}