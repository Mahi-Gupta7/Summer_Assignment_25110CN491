#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,next;
    printf("Enter the value of n");
    scanf("%d",&n);

    if(n==1)
    {
        printf("the %dst fibonacci term is %d",n,a);
    }
    else if(n==2)
    {
        printf("the %dnd fibonacci term is %d",n,b);
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            next=a+b;
            a=b;
            b=next;
        }
        printf("the %dth fibonacci term is %d",n,b);
    }

    return 0;

}