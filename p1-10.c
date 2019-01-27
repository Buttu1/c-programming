#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i,j,flag=0;
for(i=0;a[i]!='\0';i++)
{
for(j=0;b[j]!='\0';j++)
{
if(a[i]!=b[j])
{
flag=1;
}
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
