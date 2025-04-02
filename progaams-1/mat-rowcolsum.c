#include <stdio.h>
int main()
{
    int n, m, i, j, k, sum_row = 0, sum_col = 0;
    printf("enter rows and columns:");
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter elements:");
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum_row = sum_row + a[i][j];
        }
        printf("sum of row %d is:%d \n", i + 1, sum_row);
        sum_row = 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum_col = sum_col + a[j][i];
        }
        printf("sum of col %d is:%d \n", i + 1, sum_col);
        sum_col = 0;
    }
    return 0;
}