#include <string.h>
#include <stdio.h>

int main()
{
    int i, j, len, n = 3;
    char str1[n][25], temp[25];

    printf("Enter strings:\n");
    // Read input strings
    for (i = 0; i < n; i++)
    {
        fgets(str1[i], 25, stdin);
        str1[i][strcspn(str1[i], "\n")] = '\0'; // Remove newline character if present
    }

    // Sort the strings in lexicographical order using bubble sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str1[i], str1[j]) > 0)
            {
                strcpy(temp, str1[i]);
                strcpy(str1[i], str1[j]);
                strcpy(str1[j], temp);
            }
        }
    }

    // Print sorted strings
    printf("Sorted strings:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str1[i]);
    }

    return 0;
}
