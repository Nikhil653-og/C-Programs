
#include <string.h>
#include <stdio.h>
int main()
{
    int i, j, len, n = 3;
    char str1[n][25], str2[15], temp[25];
    printf("Enter strings:");
    for (i = 0; i < n; i++)
    {
        fgets(str1[i], 25, stdin);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (strcmp(str1[j], str1[j + 1]) > 0)
            {
                strcpy(temp, str1[j]);
                strcpy(str1[j], str1[j + 1]);
                strcpy(str1[j + 1], temp);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s \n", str1[i]);
    }
}