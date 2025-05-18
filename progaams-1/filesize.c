#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("15a.c", "rb");
    if (fp != NULL)
    {
        fseek(fp, 0, SEEK_END);
        long fsize = ftell(fp);
        printf("File size=%ld bytes", fsize);
    }
    else
    {
        printf("Error");
    }
}