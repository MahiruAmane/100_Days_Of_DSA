// Write a C Program To Insert An Element At a Given Position In An Array Of Integers. Shift Existing Elements To The Right To Make Space.

#include <stdio.h>

int main()
{
    int n;

    printf("Please Enter The Number Of Elements In The Array : ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Please Enter The Elements Of The Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int element, position;

    printf("Please Enter The Element To Be Inserted : ");
    scanf("%d", &element);

    printf("Please Enter The Position To Insert The Element (1 to %d) : ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1)
    {
        printf("Please Enter A Valid Position To Insert An Element In The Array");
        return 1;
    }

    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;

    printf("Array After Insertion Of Element At Position %d : \n", position);
    for (int i = 0; i <= n; i++)
    {
        printf("Element %d : ", i + 1);
        printf("%d \n", arr[i]);
    }
    
    return 0;
}