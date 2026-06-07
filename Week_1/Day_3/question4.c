#include<stdio.h>
int main()
{
    int a,b,i,small,gcd,lcm;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);

    if(a<b)
        small=a;
    else
        small=b;

    for(i=1;i<=small;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }

    lcm=(a*b)/gcd;

    printf("LCM of entered numbers=%d",lcm);
    return 0;

}