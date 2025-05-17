// 15 a
#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("data44.txt", "w");
    char ch;
    int flag = 0;
    if (fp != NULL)
    {
        printf("File opened sucessfully");
    }
    else
    {
        printf("Error opening file");
    }
}
