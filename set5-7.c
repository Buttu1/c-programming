#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,min,max;
scanf("%d",n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
a[0]=min;
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
printf("%d",min);
a[0]=max;
for(i=0;i<n;i+=)
{
if(a[i]>max)
{
max=a[i];
}
printf("%d",max);
getch();
}
