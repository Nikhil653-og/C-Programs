#include <stdio.h>
void swap(int *, int *);
int main()
{
    int x = 5, y = 6;
    printf("x=%d y=%d", x, y);
    swap(&x, &y);
    printf("x=%d y=%d", x, y);
}
void swap(int *a, int *b)
{
    int z;
    z = *a;
    *a = *b;
    *b = z;
}