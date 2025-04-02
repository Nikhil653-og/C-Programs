#include <stdio.h>
int main()
{
    int n, m, i, j, k, flag = 1;
    printf("enter rows and columns:");
    scanf("%d %d", &n, &m);
    int a[n][m], b[m][n];
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
            if (a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    if (flag == 1)
    {
        printf("symmetric");
    }
    else
    {
        printf("not symmetric");
    }
    return 0;
}