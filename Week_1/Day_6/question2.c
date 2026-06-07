#include<stdio.h>
int main()
{
    int n,rem,ans=0,place=1;
    printf("Enter a binary number");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        ans=ans+rem*place;
        place=place*2;
        n=n/10;
    }

    printf("Equivalent decimal number = %d",ans);

    return 0;

}