#include <stdio.h>
int main()
{
    int i, j, n = 6, *ptr, temp, a[] = {3, 7, 15, 2, 9, 10};
    ptr = a;
    for (i = 0; i < n - i; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + n - i - 1);
        *(ptr + n - i - 1) = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        printf("%d ", *(ptr + i));
    }
}