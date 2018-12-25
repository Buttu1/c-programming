#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i.j,c[20],k=0;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<=b/2;j++)
{
if(i%j!=0)
{
c[k]=i;
k++;
}
}
for(k=0;k<=b;k++)
{
printf("%d",c[k]);
}
getch();
}
