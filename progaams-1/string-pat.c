#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, n = 18, len, pos, count = 0;
    char str1[] = "AABBAABBABABBAAABAA", key[] = "AAA";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < strlen(key); j++)
        {
            if (str1[i] == key[j])
            {
                for (k = 1; k < strlen(key); k++)
                {
                    if (str1[i + k] == key[j + k])
                    {
                        count++;
                        break;
                    }
                }
            }
        }
    }
    printf("%d times repeated", count);
}