#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,next;
    printf("Enter number of terms");
    scanf("%d",&n);

    printf("Fibonacci Series:\t");
    printf("%d\t%d\t",a,b);

    for(i=3;i<=n;i++)
    {
        next=a+b;
        printf("%d\t",next);
        a=b;
        b=next;
    }

    return 0;

}