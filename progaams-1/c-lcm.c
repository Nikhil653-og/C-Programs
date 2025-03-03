#include <stdio.h>
int main()
{
    int a, b, c, d = 95, e = 35;
    printf("Enter numbers:");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    while (1)
    {
        if (c % a == 0 && c % b == 0)
        {
            printf("LCM of %d %d is:%d ", a, b, c);
            break;
        }
        ++c;
    }
}