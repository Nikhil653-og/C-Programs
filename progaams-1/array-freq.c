#include <stdio.h>
int main()
{
    int n = 8, i, j, count;
    int a[] = {7, 5, 11, 7, 8, 3, 5, 11};
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count += 1;
            }
        }
        printf("%d is the count of %d \n", count, a[i]);
    }
}