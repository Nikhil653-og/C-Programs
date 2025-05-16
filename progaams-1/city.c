#include <stdio.h>
#include <string.h>
struct city
{
    char name[20];
    float lit;
    int pop;
};

int main()
{
    int n, i, j, t;
    printf("Enter the number of cities:");
    scanf("%d", &n);
    struct city c1[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the City Name");
        scanf("%s", c1[i].name);
        printf("Enter the City Literacy");
        scanf("%f", &c1[i].lit);
        printf("Enter the City Population");
        scanf("%d", &c1[i].pop);
    }
    struct city temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(c1[j].name, c1[j + 1].name) > 0)
            {
                temp = c1[j];
                c1[j] = c1[j + 1];
                c1[j + 1] = temp;
            }
            else if (strcmp(c1[j].name, c1[j + 1].name) == 0 && c1[j].lit != c1[j + 1].lit ||
                     strcmp(c1[j].name, c1[j + 1].name) == 0 && c1[j].lit == c1[j + 1].lit && c1[j].pop > c1[j + 1].pop)
            {

                temp = c1[j];
                c1[j] = c1[j + 1];
                c1[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("Name: %s, Literacy: %.2f, Population: %d\n", c1[i].name, c1[i].lit, c1[i].pop);
    }
    return 0;
}