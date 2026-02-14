// Write a C Program To Check If a Given Matrix Is An Identity Matrix Or Not.

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Please Enter Number Of Rows : ");
    scanf("%d", &rows);

    printf("Please Enter Number Of Columns : ");
    scanf("%d", &cols);

    if (rows != cols)
    {
        printf("The Given Matrix Cannot Be An Identity Matrix");
        return 0;
    }

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

    int is_identity = 1;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (i == j && matrix[i][j] != 1)
            {
                is_identity = 0;
                break;
            }
            else if (i != j && matrix[i][j] != 0)
            {
                is_identity = 0;
                break;
            }
        }
        if (!is_identity)
        {
            break;
        }
    }

    if (is_identity)
    {
        printf("The Given Matrix Is An Identity Matrix");
    }
    else
    {
        printf("The Given Matrix Is Not An Identity Matrix");
    }

    return 0;
}