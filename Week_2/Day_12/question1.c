#include<stdio.h>

// Function to check Palindrome number 
int isPalindrome(int n)
{
    int temp, reverse = 0, remainder;

    temp=n;

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n/10;
    }

    if (temp == reverse)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (isPalindrome(num))
        printf("%d is a Palindrome Number\n",num);
    else
        printf("%d is not a Palindrome Number\n",num);

    return 0;
}