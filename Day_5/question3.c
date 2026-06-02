#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);

    printf("factors of entered number:");

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
        }
    }

    return 0;

}