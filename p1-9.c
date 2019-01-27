#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,count=0;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
for(j=2;j<=b;j++)
{
if(j%i!=0)
{
count++;
}
}
}
printf("%d",count);
getch();
}
