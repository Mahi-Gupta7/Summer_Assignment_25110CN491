#include<stdio.h>

int main() 
{
    int n, i, j, found;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++) 
    {
        found = 0;

        for(j = 0; j < i; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                found = 1;
                break;
            }
        }

        if(found == 0) 
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}