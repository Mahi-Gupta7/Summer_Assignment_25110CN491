#include<stdio.h>
int main()
{
    int a,b,i,j,t,d,count,sum,product;
    printf("Enter lower limit of range");
    scanf("%d",&a);
    printf("Enter upper limit of range");
    scanf("%d",&b);
    
    for(i=a;i<=b;i++)
    {
        t=i;sum=0;count=0;

        while(t>0)
        {
            t=t/10;
            count++;
        }

        t=i;
        while(t>0)
        {
            d=t%10;
            product=1;
            for(j=1;j<=count;j++)
            {
                product=product*d;
            }

            sum=sum+product;
            t=t/10;
        }

        if(sum==i)
            printf("%d\t",i);
    }

    return 0;

}