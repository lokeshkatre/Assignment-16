#include<stdio.h>
int main()
{
    int matrix[10][10];
    int rowSum=0,columnSum=0,m,n;
    printf("Enter no. of rows:");
    scanf("%d",&m);
    printf("Enter no. of columns:");
    scanf("%d",&n);
    printf("Enter matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe sum of rows and columns are:\n");
    for (int i = 0; i < m; i++)
    {
        rowSum=0;
        for (int j = 0; j<n; j++)
        {
            rowSum+=matrix[i][j];
            printf("%d ",matrix[i][j]);
        }
        printf("  %d\n",rowSum);
        
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        columnSum=0;
        for (int j = 0; j<m; j++)
        {
            columnSum+=matrix[j][i];
        }
        printf("%d ",columnSum);
        
    }
    
    
    return 0;
}