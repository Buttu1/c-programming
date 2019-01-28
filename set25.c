#include<stdio.h>
void main()
{
 int a[20],i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[a[j]=temp;
  }
     }
for(i=0;i<n;i++)
     {
       printf("%d",a[i]);
     }
    if(n%2==0)
    {
     printf("%d",a[n/2+1]);
    }
    else
    {
     printf("%d",a[n/2]);
    }
   
