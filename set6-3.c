#include<stdio.h>
void main()
{
int n,sum=0,rem;
scanf("%d",n)
while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/2;
}
printf("%d",sum);
getch();
}
