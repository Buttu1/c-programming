#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,count=0,rem, i;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
temp1=i;
temp2=i;
}
while(temp1!=0)
{
temp1=temp1/10;
count++;
}
while(temp2!=0)
{
rem=i/10;
sum=sum+(rem*rem*rem);
i=i%10
}
if(sum==temp)
{
printf("armstrong");
}
else
{
printf("not an armstrong");
}
getch();
}
