#include<stdio.h>

int main()
{
    int n,i;
    int evencount = 0,oddcount = 0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            evencount++;
        else
            oddcount++;
    }

    printf("Number of Even elements = %d\n", evencount);
    printf("Number of Odd elements = %d\n", oddcount);

    return 0;
}