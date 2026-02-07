// Write a C Program To Remove Duplicates In a Sorted Array, Print Only Unique Elements In Order.

#include <stdio.h>

int main()
{
    int n1;

    printf("Please Enter The Number Of Elements In The Sorted Array : ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Please Enter The Elements Of The Sorted Array : \n");
    for (int i = 0; i < n1; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("The Unique Elements In The Sorted Array Are : \n");
    for (int i = 0; i < n1; i++)
    {
        if (i == 0 || arr1[i] != arr1[i - 1])
        {
            printf("%d ", arr1[i]);
        }
    }
    
    return 0;
}