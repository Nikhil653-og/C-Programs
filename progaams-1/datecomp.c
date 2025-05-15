#include <stdio.h>
int date_compare(int[], int[]);
int main()
{
    int date1[3], date2[3], flag;
    printf("Enter the date 1 in DD/MM/YYYY format:");
    scanf("%d %d %d", &date1[0], &date1[1], &date1[2]);
    printf("Enter the date 2 in DD/MM/YYYY format:");
    scanf("%d %d %d", &date2[0], &date2[1], &date2[2]);
    int f = date_compare(date1, date2);
    if (f == 1)
    {
        printf("date 1 is early %d", f);
    }
    else if (f == 0)
    {
        printf("date 1 is late %d", f);
    }
    else
    {
        printf("They are same");
    }
    return 0;
}
int date_compare(int a[], int b[])
{
    int flag;
    if (a[2] != b[2])
    {
        if (a[2] < b[2])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (a[1] != b[1])
    {
        if (a[1] < b[1])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (a[0] != b[0])
    {
        if (a[0] < b[0])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 2;
    }
}