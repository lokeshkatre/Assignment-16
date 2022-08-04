#include <stdio.h>
int main()
{
    int mat[3][3], trans[3][3], m, n;
    printf("Enter no. of rows in matrix:");
    scanf("%d", &m);
    printf("Enter no. of columns in matrix:");
    scanf("%d", &n);
    printf("Enter  Matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            trans[j][i] = mat[i][j];
    printf("\nTranspose of matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}