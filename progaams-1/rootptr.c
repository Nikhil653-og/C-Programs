#include <stdio.h>
#include <math.h>
void rootptr(int *, int *, int *);
int main()
{
    int a, b, c;
    printf("Enter a,b,c:");
    scanf("%d %d %d", &a, &b, &c);
    rootptr(&a, &b, &c);
}
void rootptr(int *x, int *y, int *z)
{
    float d, w, root1, root2;
    d = pow(*y, 2) - 4 * (*x) * (*z);
    if (d == 0)
    {
        root1 = -(*y);
        root2 = (*y);
    }
    else if (d > 0)
    {
        root1 = -(*y) + pow(d, 0.5);
        root2 = (*y) + pow(d, 0.5);
    }
    else
    {
        printf("the roots are imaginary and complex");
    }
    printf("The roots are %.2f , %.2f", root1, root2);
}