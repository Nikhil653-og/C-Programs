#include <stdio.h>
void bsort(int[], int);

int main()
{
    int i, j, k, temp, n;
    printf("Enter the array length:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter elements:");
        scanf("%d", &a[i]);
    }
    bsort(a, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
void bsort(int x[], int n)
{
    int temp, i, j;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n - 1 - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j + 1];
                x[j + 1] = x[j];
                x[j] = temp;
            }
        }
    }
}