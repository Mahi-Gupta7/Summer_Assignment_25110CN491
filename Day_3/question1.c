#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter a number greater than one");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("Entered number is Prime Number");
    }
    else
    {
        printf("Entered number is Not Prime");
    }

    return 0;

}