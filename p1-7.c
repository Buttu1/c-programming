#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,temp,count=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
for(i=0;i<c;i++)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
printf("%s",a);
getch();
}
