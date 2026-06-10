#include<stdio.h>

int main() 
{
    int i,j,k,sp=4;
    char ch;

    for(i=1;i<=5;i++) 
    {
        for(k=1;k<=sp;k++)
        {
            printf(" ");
        }
        
        ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        
        ch=ch-2;
        for(j=i-1;j>=1;j--)
        {
            printf("%c",ch);
            ch--;
        }

        printf("\n");
        sp--;
    }

    return 0;
}