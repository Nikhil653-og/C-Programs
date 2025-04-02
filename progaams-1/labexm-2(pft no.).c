#include <stdio.h>
int main()
{
    int n = 28, i, j, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("perfect no.");
    }
    else
    {
        printf("not a perfect no.");
    }
}