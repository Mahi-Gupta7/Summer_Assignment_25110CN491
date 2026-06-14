#include<stdio.h>

int main()
{
    int n, i, key, count = 0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element whose frequency is to be found: ");
    scanf("%d",&key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", key, count);

    return 0;
}