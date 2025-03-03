#include <stdio.h>
int main()
{
    int n = 6, i, j, temp, k = 2;
    int a[] = {3, 11, 8, 27, 4, 7};
    for (i = 0; i < k; i++)
    {
        temp = a[n - 1];
        for (j = 0; j < n - 1; j++)
        {
            a[n - j - 1] = a[n - j - 2];
        }
        a[0] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}