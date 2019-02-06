#include<stdio.h>
#include<conio.h>
int n,count=0,rem;
scanf("%d",&n);
while(n>0)
{
rem=n%10;
count++;
n=n/10;
}
printf("%d",count);
getch();
}
