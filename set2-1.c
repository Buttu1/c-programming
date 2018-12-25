#include<stdio.h>
#include<conio.h>
void main()
{
int num,exp,temp=1;
printf("enter num");
scanf("%d",&num);
printf("enter exponent");
scanf("%d",&exp);
while(exp>0)
{
temp=temp*num;
exp--;
}
printf("%d",temp);
getch();
}
