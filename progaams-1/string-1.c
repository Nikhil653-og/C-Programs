#include <stdio.h>
int main()
{
    int n, i, j, k, p, count = 0;
    char str[100];
    char str1[] = "hello", str2[] = "world";
    for (i = 0; str1[i] != '\0'; i++)
        ;
    for (j = 0; str2[j] != '\0'; j++)
        ;

    char str3[i + j];
    for (k = 0; k < (i + j) + 1; k++)
    {
        if (k <= j)
        {
            str3[k] = str1[k];
        }
        else
        {
            str3[k] = str2[k];
        }
    }
    for (p = 0; p < i + j; p++)
    {
        printf("%c", str3[p]);
    }
    /*
    #include <stdio.h>
    #include <string.h>

    int main() {
        int i, j, k, p;
        char str1[] = "hello", str2[] = "world";
        char str3[100];  // Make sure str3 is large enough to hold the result

        // Calculate lengths of str1 and str2
        int len1 = strlen(str1);
        int len2 = strlen(str2);

        // Combine str1 and str2 into str3
        for (i = 0; i < len1; i++) {
            str3[i] = str1[i];
        }
        for (j = 0; j < len2; j++) {
            str3[i + j] = str2[j];  // Append str2 after str1
        }

        // Null-terminate the resulting string
        str3[i + j] = '\0';

        // Print the combined string
        printf("%s\n", str3);

        return 0;
    }
    */
}