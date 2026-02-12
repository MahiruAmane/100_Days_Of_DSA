// Write a C Program To Check If a Matrix Is Symmetric Or Not.

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

    int is_symmetric = 1; 
    
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                is_symmetric = 0; 
                break;
            }
        }
        if (!is_symmetric)
        {
            break;
        }
    }

    printf("The Transpose Of The Given Matrix Is As Follows : \n");
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    if (is_symmetric)
    {
        printf("The Given Matrix Is Symmetric");
    }
    else
    {
        printf("The Given Matrix Is Not Symmetric");
    }

    return 0;
}