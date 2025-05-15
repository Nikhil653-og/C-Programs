#include <stdio.h>
#include <string.h>
struct book
{
    char name[25];
    float price;
};
void alphabetic(struct book[], int);
int main()
{
    int n;
    printf("enter the no. of books:");
    scanf("%d", &n);
    struct book b1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter book name:");
        scanf("%s", b1[i].name);
        printf("Enter price:");
        scanf("%f", &b1[i].price);
    }
    alphabetic(b1, n);
}
void alphabetic(struct book x[], int n)
{
    char temp[25];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(x[j].name, x[j + 1].name) > 0)
            {
                strcpy(temp, x[j].name);
                strcpy(x[j].name, x[j + 1].name);
                strcpy(x[j + 1].name, temp);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s ", x[i].name);
    }
}