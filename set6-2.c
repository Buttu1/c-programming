#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    scanf("%d",&n);
    if(n>9)
    {
        while(n!='\0')
        {
           rem=n%10;
           rev=(rev*10)+rem;
           n=n/10;
        }
        n=rev;
        rem=0;
        while(n!='\0')
        {
            rem=n%10;
           switch(rem)
           {
             case 0:printf("zero ");
               break;
             case 1:printf("one ");
                   break;
            case 2:printf("two ");
                   break;
             case 3:printf("three ");
                   break;
             case 4:printf("four ");
                   break;
             case 5:printf("five ");
                   break;
             case 6:printf("six ");
                   break;
             case 7:printf("seven ");
                   break;
             case 8:printf("eight ");
                   break;
             case 9:printf("nine ");
                   break;  
           }
          
           n=n/10;
        }
        
    }
    else
    {
    switch(n)
    {
        case 0:printf("zero");
               break;
         case 1:printf("one");
               break;
        case 2:printf("two");
               break;
         case 3:printf("three");
               break;
         case 4:printf("four");
               break;
         case 5:printf("five");
               break;
         case 6:printf("six");
               break;
         case 7:printf("seven");
               break;
         case 8:printf("eight");
               break;
         case 9:printf("nine");
               break;
    }
    }
    return 0;
}
 
 
 
