#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
printf("yes");
}
else
{
printf("no");
}
}
getch();
}
