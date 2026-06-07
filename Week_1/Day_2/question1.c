#include<stdio.h>
int main()
{
    int n,i,d,sum=0;
    printf("Enter a number");
    scanf("%d",&n);

    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }

    printf("Sum of digits of entered number=%d",sum);
    return 0;

}