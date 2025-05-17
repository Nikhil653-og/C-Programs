// The code is partially incorrect
#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int emp_no;
    char name[25], gender[6];
    float salary;
};
int main()
{
    FILE *fp1, *fp2, *fp3;
    fp2 = fopen("data44.txt", "w");
    fp3 = fopen("data44.txt", "a");
    int n, i, j, choice = 0, m;
    printf("Enter no. of employees:");
    scanf("%d", &n);
    struct employee e1[n];
    struct employee e2[m];
    for (i = 0; i < n; i++)
    {
        printf("Enter employee serial number:");
        scanf("%d", &e1[i].emp_no);
        printf("Enter name:");
        scanf("%s", e1[i].name);
        printf("Enter gender:");
        scanf("%s", e1[i].gender);
        printf("Enter gross salary:");
        scanf("%f", &e1[i].salary);
        fprintf(fp2, "%d %s %s %.2f", e1[i].emp_no, e1[i].name, e1[i].gender, e1[i].salary);
    }
    while (choice != 4)
    {
        printf("Enter a choice 1 for adding an employee,2 for updating gross pay to 0,3 for salary increase,4 to exit");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter no. of employees to be added :");
            scanf("%d", &m);

            for (i = 0; i < n; i++)
            {
                printf("Enter employee serial number:");
                scanf("%d", &e2[i].emp_no);
                printf("Enter name:");
                scanf("%s", e2[i].name);
                printf("Enter gender:");
                scanf("%s", e2[i].gender);
                printf("Enter gross salary:");
                scanf("%f", &e2[i].salary);
                fprintf(fp3, "%d %s %s %.2f", e2[i].emp_no, e2[i].name, e2[i].gender, e2[i].salary);
            }
        }
        else if (choice == 2)
        {
            int emp;
            printf("Enter the employee to be removed with serial no.:");
            scanf("%d", &emp);
            for (i = 0; i < n; i++)
            {
                if (e1[i].emp_no == emp)
                {
                    e1[i].salary = 0;
                    fprintf(fp2, "%.2f", e1[i].salary);
                }
            }
            for (i = 0; i < m; i++)
            {
                if (e2[i].emp_no == emp)
                {
                    e2[i].salary = 0;
                    fprintf(fp2, "%.2f", e2[i].salary);
                }
            }
        }
        else if (choice == 3)
        {
            int k, n1;
            printf("Enter employee who's salary increased");
            scanf("%d", &k);
            printf("Enter the amount :");
            scanf("%d", &n1);
            for (i = 0; i < n; i++)
            {
                if (e1[i].emp_no == k)
                {
                    e1[i].salary += n1;
                    fprintf(fp2, "%.2f", e1[i].salary);
                }
                if (e2[i].emp_no == k)
                {
                    e2[i].salary += n1;
                    fprintf(fp2, "%.2f", e2[i].salary);
                }
            }
        }
    }
    return 0;
}