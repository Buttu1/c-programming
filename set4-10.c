#include<stdio.h>
#include<conio.h>
void main()
{
int n,f1=0,f2=0,f3;
scanf("%d",n);
printf("%d %d",f1,f2);
for(i=1;i<n;i++)
{
f3=f1+f2;
f2=f1;
f1=f2;
}
printf("%d",f3);
getch();
}
