#include <stdio.h>
#include <math.h>
int main()
{
    int x = 7354, y = 7354, rem, div, len = 0, first, last;
    while (x != 0)
    {
        x = x / 10;
        len++;
    }
    div = pow(10, len - 1);
    first = y / div;
    last = y % 10;
    printf("%d ", first);
    printf("%d ", last);
    printf("The sum is %d", first + last);
}