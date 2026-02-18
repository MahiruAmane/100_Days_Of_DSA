// Write a C Program To Input An Array & Find Frequency Of Each Element In The Array.

#include <stdio.h>

int main()
{
    int n;

    printf("Please Enter The Size Of The Array : ");
    scanf("%d", &n);

    int array[n];
    int frequency[n];

    printf("Please Enter The Elements Of The Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &array[i]);
        frequency[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i] == array[j])
            {
                frequency[i]++;
            }
        }
    }

    printf("The Frequency Of Each Element In The Array Is As Follows : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d Appears %d Times\n", array[i], frequency[i]);
    }

    return 0;
}