#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,max;
scanf("%d",n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
getch();
}
