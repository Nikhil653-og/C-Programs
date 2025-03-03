#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, n;
    char str1[10] = "hello", str2[10] = "world", str3[10];
    printf("%s ", strcat(str1, str2));
    printf("%d", strlen(str1));
    printf("%d \n", strcmp(str1, str2));
    printf("%s \n", strcpy(str3, str1));
}