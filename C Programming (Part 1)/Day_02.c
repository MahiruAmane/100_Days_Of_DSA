// Write a C Program To Delete The Element At a Given Position From An Array Of Integers. Shift Remaining Elements To The Left.

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

    int position;

    printf("Please Enter The Position To Delete The Element (1 to %d) : ", n);
    scanf("%d", &position);

    if (position < 1 || position > n)
    {
        printf("Please Enter A Valid Position To Delete An Element From The Array");
        return 1;
    }

    for (int i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array After Deleting The Element At Position %d : \n", position);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        printf("%d \n", arr[i]);
    }   

    return 0;

}