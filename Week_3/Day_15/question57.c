#include<stdio.h>

int main()
{
    int n, i, temp;
    
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int start = 0;
    int end = n-1;

    for(i = 0; i < n / 2; i++)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}