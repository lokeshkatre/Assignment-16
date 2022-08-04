#include <stdio.h>
int main()
{
    int matrix[10][10];
    int n, m;
    printf("Enter no. of rows:");
    scanf("%d", &m);
    printf("Enter no. of columns:");
    scanf("%d", &n);
    if (m == n)
    {
        printf("Enter matrix:\n");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &matrix[i][j]);
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j <= i)
                    printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nThe matrix is not a square matrix");

    return 0;
}