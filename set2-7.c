#inlcude<stdio.h>
#include<conio.h>
void main()
{
int num,count=0,rem,temp,sum=0,p=1;
scanf("%d",&num);
temp=num;
while(num!=0)
{
num=num/10;
count++;
}
c=count;
while(num>0)
{
rem=rem%10;
  while(c>0)
    {
       p=p*rem;
        c--;
     }
count=c;
sum=sum+p;
p=1;
num=num/10;
if(sum==temp)
{
printf("armstrong");
}
else
{
printf("not a armstrong");
}
}
getch();
}
