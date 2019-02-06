#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i,j;
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
for(j=0;b[j]!='\0';j++)
{
a[i]=b[j];
}
a[i]='\0';
printf("%s",a);
getch();
}
