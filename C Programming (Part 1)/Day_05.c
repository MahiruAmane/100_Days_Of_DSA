// Write a C Program To Input Two Sorted Array and Merge Them Into A Single Sorted Array.

#include <stdio.h>

int main()
{
    int n1;

    printf("Please Enter The Number Of Elements In The First Array : ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Please Enter The Elements Of The First Array : \n");
    for (int i = 0; i < n1; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    int n2;

    printf("Please Enter The Number Of Elements In The Second Array : ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Please Enter The Elements Of The Second Array : \n");
    for (int i = 0; i < n2; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int mergedArr[n1 + n2];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            mergedArr[k++] = arr1[i++];
        }
        else
        {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        mergedArr[k++] = arr1[i++];
    }

    while (j < n2)
    {
        mergedArr[k++] = arr2[j++];
    }

    printf("THe Merged Sorted Array Is As Follows : \n");
    for (int m = 0; m < n1 + n2; m++)
    {
        printf("Element %d : ", m + 1);
        printf("%d \n", mergedArr[m]);
    }

    return 0;
}