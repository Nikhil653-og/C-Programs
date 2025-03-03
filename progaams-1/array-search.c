#include <stdio.h>
int main()
{
    int n = 8, i, j, k = 11;
    int a[50] = {7, 15, 11, 8, 3, 5};
    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            printf("element %d found at %d", k, i);
        }
    }
}