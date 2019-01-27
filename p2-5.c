#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int i,j,count=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
count=0
for(j=0;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
count++;
}
}
if(count>=3)
{
printf("%s",a[i]);
}
}
getch();
}
