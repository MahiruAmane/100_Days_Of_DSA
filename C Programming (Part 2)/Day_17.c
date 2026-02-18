// Write a C Program To Find Maximum And Minimum Element In An Array.

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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("The Maximum Element In The Array Is : %d \n", array[n - 1]);
    printf("The Minimum Element In The Array Is : %d \n", array[0]);

    return 0;
}