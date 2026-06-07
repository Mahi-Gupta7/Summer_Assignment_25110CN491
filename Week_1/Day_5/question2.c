#include<stdio.h>
int main()
{
    int n,t,i,sum=0,d,factorial;
    printf("Enter a number");
    scanf("%d",&n);

    t=n;
    while(t>0)
    {
        d=t%10;
        factorial=1;
        for(i=1;i<=d;i++)
        {
            factorial=factorial*i;
        }
        sum=sum+factorial;
        t=t/10;    
    }

    if(sum==n)
        printf("Entered number is Strong number");
    else
        printf("Entered number is not Strong number");

    return 0;

}