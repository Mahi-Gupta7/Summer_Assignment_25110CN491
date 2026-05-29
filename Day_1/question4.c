#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a number");
    scanf("%d",&n);

    while(n>0)
    {
        count=count+1;
        n=n/10;
    }

    printf("Number of digits in entered number=%d",count);
    return 0;

}