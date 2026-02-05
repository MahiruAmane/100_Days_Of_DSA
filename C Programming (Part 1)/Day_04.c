// Write a C Program To Reverse An Array In Place Using Two Pointer Approach.

#include <stdio.h>

int main()
{
    int n;

    printf("Please Enter The Number Of Elements In The Array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Please Enter The Elements Of The Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int start = 0, end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("The Reversed Array Is As Follows : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        printf("%d \n", arr[i]);
    }

    return 0;
}