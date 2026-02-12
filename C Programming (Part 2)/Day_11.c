// Write a C Program To Add Two Matrices.

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

    int matrix2[rows][cols];

    printf("Please Enter Elements Of The Second Matrix : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("The Second Given Matrix Is As Follows : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    int sum_matrix[rows][cols];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum_matrix[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }

    printf("The Sum Of The Two Matrices Is As Follows : \n");
    
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}