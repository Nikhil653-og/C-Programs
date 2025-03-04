#include <stdio.h>
int main()
{
    int i, j, n = 6, pos, k = 1;
    int a[] = {8, 3, 1, 14, 7, 18};
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == k)
        {
            pos = i;
            break;
        }
    }
    for (i = pos; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}