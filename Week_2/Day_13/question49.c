#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int A[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t",A[i]);
    }

    return 0;
}