// Write a C Program To Implement Linear Search To Find Key In An Array. Count & Display The Number Of Comparisons Performed.

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

    int key;

    printf("Please Enter The Key To Search In The Array : ");
    scanf("%d", &key);

    int found = 0;
    int comparisons = 0;

    for (int i = 0; i < n; i++)
    {
        comparisons++;
        if (arr[i] == key)
        {
            found = 1;
            printf("Key %d Found At Position %d In The Array\n", key, i + 1);
            break;
        }
    }

    if (!found)
    {
        printf("Key %d Not Found In The Array", key);
    }

    printf("Number Of Comparisons Performed : %d", comparisons);
    
    return 0;
}