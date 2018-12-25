#include<stdio.h>
#include<conio.h>
void main()
{
int num,t,i;
printf("enter range");
scanf("%d",&num);
printf("enter table");
scanf("%d",&t);
for(i=1'i<=num;i++)
{
if(i%t==0)
{
printf("%d",i);
}
getch();
}
