#include<stdio.h>
#include<conio.h>
void main()
{
int num,rem,sum=0;
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
sum=sum+(rem*rem);
num=num/10;
}
printf("%d",sum);
getch();
}
