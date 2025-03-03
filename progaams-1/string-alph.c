#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i, j, k, n, len;
    printf("Enter string length:");
    scanf("%d", &n);
    char str[n][10], temp[10];
    printf("Enter numbers:");
    getchar();
    for (i = 0; i < n; i++)
    {
        fgets(str[i], 10, stdin);
    }
    str[i][10] = '\0';
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    printf("The sorted names:");
    for (i = 0; i < n; i++)
    {
        printf("%s", str[i]);
    }
    return 0;
}