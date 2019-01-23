#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],i,count=0,b[5],j=0;
    clrscr();
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(i=count-1;i>=0;i--)
    {
      b[j]=c[i];
      j++;
    }
    printf("%s",b);
    getch();
}
