#include<stdio.h>

int main() 
{
    int i,j,k,sp=4;

    for(i=1;i<=5;i++) 
    {
        for(k=1;k<=sp;k++)
        {
            printf(" ");
        }
        
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }

        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }

        printf("\n");
        sp--;
    }

    return 0;
}