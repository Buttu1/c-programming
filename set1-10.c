#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0;
scanf("%d",&num);
while(num!=0)
{
count++;
num=num/10;
}
printf("the number of digit %d",count);
getch();
}
