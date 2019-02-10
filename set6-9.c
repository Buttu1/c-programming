#include<stdio.h>
void main()
{
int n,rem,count;
scanf("%d",n);
while(n>0)
{
rem=n%10;
count++;
n=n/2;
}
printf("%d",count);
getch();
}
