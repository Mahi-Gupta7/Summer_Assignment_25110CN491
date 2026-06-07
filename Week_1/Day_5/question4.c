#include<stdio.h>
int main()
{
    int n,i,j,flag=0,largest;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                largest=i;
        }

        
    }

    
    printf("Largest prime factor=%d",largest);

    return 0;

}