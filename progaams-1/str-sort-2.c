#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, len, n = 3;
    char s1[3][15] = {"hello", "cool", "march"}, temp[15];
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(s1[j], s1[j + 1]) > 0)
            {
                strcpy(temp, s1[j]);
                strcpy(s1[j], s1[j + 1]);
                strcpy(s1[j + 1], temp);
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", s1[i]);
    }
}
