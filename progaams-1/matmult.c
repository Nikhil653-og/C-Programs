#include <stdio.h>
int main()
{
    int n, m, i, j, n1, m1, n2, m2, l, k;
    printf("enter rows and columns of 1st:");
    scanf("%d %d", &n1, &m1);
    int a[n1][m1];
    printf("enter rows and columns of 2nd:");
    scanf("%d %d", &n2, &m2);
    int b[n2][m2];
    if (m1 != n2)
    {
        printf("matrix multiplication is not possible");
    }
    else
    {
        k = n2;
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < m1; j++)
            {
                printf("enter matrix A:");
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < n2; i++)
        {
            for (j = 0; j < m2; j++)
            {
                printf("enter matrix B:");
                scanf("%d", &b[i][j]);
            }
        }
        int c[n1][m2];
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < m2; j++)
            {
                c[i][j] = 0;
                for (l = 0; l < n2; l++)
                {
                    c[i][j] = c[i][j] + a[i][l] * b[l][j];
                }
            }
        }
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < m2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}