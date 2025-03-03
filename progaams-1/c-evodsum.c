#include <stdio.h>
int main()
{
    int a = 3427839, x, y, s1 = 0, s2 = 0;
    while (a != 0)
    {
        x = a % 10;
        if (x % 2 == 0)
        {
            s1 = s1 + x;
        }
        if (x % 2 != 0)
        {
            s2 = s2 + x;
        }
        a = a / 10;
    }
    printf("%d %d", s1, s2);
}