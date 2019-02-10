#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[20],c=0;
scanf("%d",n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
scanf("%d"&k);
for(i=0;i<n;i++)
{
if(k==a[i])
{
c++;
}
}
if(c!=0)
{
printf("yes");
}
getch();
}
