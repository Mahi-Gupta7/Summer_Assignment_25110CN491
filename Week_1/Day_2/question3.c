#include<stdio.h>
int main()
{
    int n,i,d,product=1;
    printf("Enter a number");
    scanf("%d",&n);

    while(n>0)
    {
        d=n%10;
        product=product*d;
        n=n/10;
    }

    printf("Product of digits of entered number=%d",product);
    return 0;

}