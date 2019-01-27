#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,j,len=0,k;
scanf("%s",a);
for(i=0;a[i]1='\0';i++)
{
length++;
}
for(k=length;k>=0;k--)
{
 for(i=0;i<length;i++)
 {
  if(a[i]='a' || a[i]='e' ||a[i]='i' ||a[i]='o' || a[i]='u')
  {
   for(j=i;j<length;j++)
   {
   a[j]=a[j+1];
   }
   length--;
   }
   }
   }
   printf("%s",a);
   getch();
   }
