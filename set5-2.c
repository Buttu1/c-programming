#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i,c1=0,c2=0,j;
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
c1++;
}
for(j=0;b[j]1=,\0';j++)
{
c2++;
}
if(c1==c2)
{
printf("%s",a);
}
else if(c1>c2)
{
printf("%s",a);
}
else
{
printf("%s",b);
}
getch();
}
