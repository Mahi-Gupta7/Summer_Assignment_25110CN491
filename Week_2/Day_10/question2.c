#include<stdio.h>

int main() 
{
    int i,j,k,sp=0;

    for(i=9;i>=1;i=i-2) 
    {

        for(k=1;k<=sp;k++)
        {
            printf(" ");
        }
        
        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");
        sp++;
    }

    return 0;
}