#include<stdio.h>
int main()
{
    int x,n,i,result=1;
    printf("Enter base");
    scanf("%d",&x);
    printf("Enter power");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        result=result*x;
    }

    printf("%d^%d=%d",x,n,result);

    return 0;

}