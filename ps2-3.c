#include<stdio.h>
void main()
{
    int n,k,a[20],j=0,i,p,max;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    j=0;
    while(k>j)
    {
        scanf("%d",&p);
        a[n]=p;
        max=a[0];
        for(i=0;i<=n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        
        printf("%d",max);
        j++;
    }
}
