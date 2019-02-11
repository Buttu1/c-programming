#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,sum=0,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
getch();
}
