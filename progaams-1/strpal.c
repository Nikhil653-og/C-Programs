#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, len, flag;
    char str1[25], rev[25];
    printf("Enter the string:\n");
    scanf("%s", str1);
    for (len = 0; str1[len] != '\0'; len++)
        ;
    for (i = 0; i < len; i++)
    {
        rev[len - i - 1] = str1[i];
    }
    printf("%s", rev);
    if (strcmp(str1, rev) != 0)
    {
        printf("Not palliandrome \n");
    }
    else
    {
        printf("Palliandrome \n ");
    }
}