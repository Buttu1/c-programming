#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,sum=0;ave;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
ave=sum/n;
getch();
}
