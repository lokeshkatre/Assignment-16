#include <stdio.h>
int main()
{
    int m1[3][3], m2[3][3], m3[3][3];
    printf("Enter first Matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &m1[i][j]);

    printf("Enter second Matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &m2[i][j]);
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + m1[i][k] * m2[k][j];
            }
            m3[i][j] = sum;
        }
    }
    printf("\nMultiplication of matrix are:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",m3[i][j]);
        printf("\n");
    }
    return 0;
}
