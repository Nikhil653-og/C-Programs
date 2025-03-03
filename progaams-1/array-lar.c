#include <stdio.h>
int main()
{
    int i, j, steps, n = 6, big, small;
    int a[] = {8, 3, 1, 24, 7, 18};
    big = a[0];
    small = a[0];
    for (i = 0; i < n; i++)
    {
        if (big < a[i])
        {
            big = a[i];
        }
    }
    for (j = 0; j < n; j++)
    {
        if (small > a[j])
        {
            small = a[j];
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n %d ", big);
    printf("\n %d ", small);
}