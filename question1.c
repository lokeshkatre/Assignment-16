#include <stdio.h>
int main()
{
    int matrix1[3][3], matrix2[3][3];
    printf("Enter first Matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter second Matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix2[i][j]);

    int matrix3[3][3];
    printf("\nSum of matrixes are:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", matrix3[i][j]);
        printf("\n");
    }
    return 0;
}