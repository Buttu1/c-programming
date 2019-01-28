#include<stdio.h>
void main()
{
 char a[50];
 int i;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]>=48 && a[i]<=57)
  {
   printf("Yes");
  }
  else
  {
   printf("No");
   }
  }
  
