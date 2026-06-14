#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int secondLargest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
        

    printf("Largest element = %d\n",largest);
    printf("Second Largest element = %d\n",secondLargest);

    return 0;
}