#include<stdio.h>
void main()
{
int a=1,b=1,c,n,i;
scanf("%d",n);
for(i=2;i<n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
getch();
}
