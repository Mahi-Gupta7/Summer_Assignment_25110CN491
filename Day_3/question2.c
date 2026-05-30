#include<stdio.h>
int main()
{
    int a,b,i,j,flag;
    printf("Enter lower limit of range greater than one");
    scanf("%d",&a);
    printf("Enter upper limit of range");
    scanf("%d",&b);

    for(i=a;i<=b;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("%d\t",i);
        }
        
        
    }


    return 0;

}