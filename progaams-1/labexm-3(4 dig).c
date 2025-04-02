#include <stdio.h>
int main()
{
    int rem, div, i, j, k, n = 4296, len = 0, sum;
    k = n;
    while (k != 0)
    {
        len = len + 1;
        k = k / 10;
    }
    if (len != 4)
    {
        printf("not 4 digit");
    }
    else
    {
        i = n / 1000;
        j = n % 10;
        sum = i + j;
        printf("sum is:%d", sum);
    }
}