#include<stdio.h>
void main()
{
    int a,b=0,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    { 
        
        if(a%i==0)
        {
        b++;
        break;
        }
        
    }
    if(b==0)
    {
        printf(" prime");
    }
    else
    {
        printf("not prime");
    }
    }
