#include <stdio.h>
int main()
{
    int n = 8, i, j, k;
    int a[] = {7, 5, 11, 7, 8, 3, 5, 11};
    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n - 1; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                    n--;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
}