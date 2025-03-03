#include <stdio.h>
int main()
{
    int i, j, steps, n = 6, pos, k, e, o;
    int a[] = {8, 3, 1, 14, 7, 18};
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            e += 1;
        else
            o += 1;
    }
    int even[e], odd[o];
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            for (k = 0; k < n; k++)
            {
                even[k] = a[i];
            }
        }
        else
        {
            for (k = 0; k < n; k++)
            {
                odd[k] = a[i];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }
    for (i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }
}