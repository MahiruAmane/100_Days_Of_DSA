// Write a C Program To Input a Matrix & Traverse The Matrix Starting From The Boundary Towards The Center In a Clockwise Manner.

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Please Enter Number Of Rows : ");
    scanf("%d", &rows);

    printf("Please Enter Number Of Columns : ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    
    printf("Please Enter Elements Of The Matrix : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The Given Matrix Is As Follows : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Traversing The Matrix Clockwise From Boundary To Center : \n");
    
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right)
    {
        for (j = left; j <= right; j++)
        {
            printf("%d ", matrix[top][j]);
        }
        top++;

        for (i = top; i <= bottom; i++)
        {
            printf("%d ", matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (j = right; j >= left; j--)
            {
                printf("%d ", matrix[bottom][j]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (i = bottom; i >= top; i--)
            {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    return 0;
}