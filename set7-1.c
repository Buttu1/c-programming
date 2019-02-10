#include<stdio.h>
void main()
{
char a[20],b[20];
int i,k,c;
gets(a);
scanf("%d",&k);
for(i=0;i<=k;i++)
{
b[i]=a[i];
}
printf("%s",b);
getch();
}
