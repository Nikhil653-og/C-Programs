#include <stdio.h>
int main()
{
    int first = 0, second = 1, next = 0, sum = 0, n;
    printf("Enter n:");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("0");
    }
    else if (n == 2)
    {
        printf("0,1");
    }
    else
    {

        while (first <= n + 1)
        {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }
    return 0;
}
