#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,temp,a[20];
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
temp=a[i];
a[i]=a[i+1];
a[i+i]=temp;
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
}
