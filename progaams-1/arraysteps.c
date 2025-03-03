#include <stdio.h>
int main()
{
    int i, j, steps, n = 6, temp;
    int a[] = {6, 2, 11, 20, 13, 8};
    temp = a[n - 1];
    for (j = 0; j < n - 1; j++)
    {
        a[n - j - 1] = a[n - j - 2];
    }
    a[0] = temp;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}