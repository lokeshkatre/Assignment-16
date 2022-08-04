#include <stdio.h>
int main()
{
    int matrix[10][10];
    int n, m, zero = 0, count = 0;
    printf("Enter no. of rows:");
    scanf("%d", &m);
    printf("Enter no. of columns:");
    scanf("%d", &n);
    printf("Enter matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    printf("\n");

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
                zero++;
            else
                count++;
        }

    if (count < zero)
        printf("The matrix is a sparse matrix");
    else
        printf("The matrixx is not a sparse matrix");
    return 0;
}