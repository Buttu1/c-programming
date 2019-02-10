#include<stdio.h>
void main()
{
char a[20],b[20];
int i,count=0;
gets(a);
a=temp;
for(i=0;a[i]!='\0';i++)
{
count++;
}
for(i=count-1;i>0;i++)
{
b[i]=a[i];
}
if(b==temp)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
