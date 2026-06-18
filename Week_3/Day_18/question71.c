#include<stdio.h>

int main()
{
    int n, i, key;
    
    printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&key);

    int low = 0, high = n - 1, mid;
    int found = 0;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
