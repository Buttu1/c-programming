#include<stdio.h>
void main()
{
    char a[20];
    int c1=0,count=0,i;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        c1++;
    }
    for(i=0;i<c1;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            count++;
        }
    }
    if(c1==count)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
