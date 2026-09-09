#include<stdio.h>
int main()
{
int choice,balance=20000,x;
while(1)
{
printf("\natm screen");
printf("\n1.check balance");
printf("\n2.deposit");
printf("\n3.withdraw");
printf("\n4.exit");
printf("\nenter the number which function you want to perform");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("%d",balance);
break;
case 2:
printf("\nenter the amount you want to deposit");
scanf("%d",&x);
balance=balance+x;
printf("\ndeposit successful");
printf("\nthe updated balance is %d",balance);
break;
case 3:
printf("\nenter the amount you want to withdraw");
scanf("%d",&x);
balance=balance-x;
printf("\nwithdraw successful");
printf("\nthe updated balance is %d",balance);
break;
case 4:
default:
printf("\nchoice invalid");
break;
}
}
}
