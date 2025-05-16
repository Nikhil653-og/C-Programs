#include <stdio.h>
struct hotel
{
    char name[20], address[45];
    int rate, grade, rooms;
};

int main()
{
    int n, i, j;
    printf("Enter number of hotels:");
    scanf("%d", &n);
    struct hotel h1[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter hotel name:");
        scanf("%s", h1[i].name);
        printf("Enter hotel address: ");
        getchar();
        fgets(h1[i].address, 45, stdin);
        printf("Enter grade :");
        scanf("%d", &h1[i].grade);
        printf("Enter average room charges :");
        scanf("%d", &h1[i].rate);
        printf("Enter no. of rooms :");
        scanf("%d", &h1[i].rooms);
    }
    struct hotel temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (h1[j].rate > h1[j + 1].rate)
            {
                temp = h1[j];
                h1[j] = h1[j + 1];
                h1[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s \n", h1[i].name);
        printf("%s \n", h1[i].address);
        printf("%d \n", h1[i].grade);
        printf("%d \n", h1[i].rate);
        printf("%d \n", h1[i].rooms);
    }
}