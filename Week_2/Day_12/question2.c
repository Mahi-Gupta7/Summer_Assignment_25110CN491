#include<stdio.h>
#include<math.h>

// Function to check Armstrong number 
int isArmstrong(int n)
{
    int temp,count=0,sum=0,digit ;

    temp = n;

    //Count number of digits 
    while (temp>0)
    {
        count++;
        temp=temp/10;
    }

    temp = n;

    // Calculate sum of powers of digits
    while (temp>0)
    {
        digit = temp % 10;
        sum = sum +  pow(digit,count);
        temp=temp/10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
} 