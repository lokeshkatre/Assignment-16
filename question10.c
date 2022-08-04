#include <stdio.h>
int main()
{
    int matrix[10][10], arr[10];
    int n, m, count = 0;
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
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
                count++;
        }
        arr[i] = count;
    }

    int max = arr[0], index = 0;
    for (int i = 0; i < m; i++)
        if (arr[i] > 0)
        {

            if (max < arr[i])
            {
                max = arr[i];
            }
            index = i + 1;
        }

    if (index != 0)
    {
        for (int i = 0; i < m; i++)
        {
            if (arr[i] == max)
                printf("%d ", i+1);
        }
        printf(" number row has maximum 1s");
    }
    else
        printf("No 1s are present in matrix");

    return 0;
}