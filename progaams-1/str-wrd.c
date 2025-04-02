#include <stdio.h>
int main()
{
    int i, j, n, count = 1;
    char str[30];
    printf("Enter string:");
    fgets(str, 30, stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("word count=%d", count);
}