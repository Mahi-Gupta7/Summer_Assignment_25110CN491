#include<stdio.h>
int main()
{
    int n,i,t,d,count=0,sum=0,product;
    printf("Enter a number");
    scanf("%d",&n);
    
    t=n;
    while(t>0)
    {
        t=t/10;
        count++;
    }

    t=n;
    while(t>0)
    {
        d=t%10;
        product=1;
        for(i=1;i<=count;i++)
        {
            product=product*d;
        }

        sum=sum+product;
        t=t/10;
    }

    if(sum==n)
        printf("Entered number is Armstrong");
    else
        printf("Entered number is Not Armstrong");

    return 0;

}