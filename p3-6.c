#include<stdio.h>
void main()
{
char a[20],b[20];
int i,j=0,n;
scanf("%s",&a);
n=strlen(a);
for(i=0;i<=n;i++)
{
if(a[i]==" ")
{
b[j]=a[i+1];
j++;
}
}
printf("%s",b);
}
