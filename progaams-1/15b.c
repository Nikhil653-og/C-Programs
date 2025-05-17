// 15 b
#include <stdio.h>
int main()
{
    int choice = 0;

    while (choice != 3)
    {
        printf("Enter the choice 1. to read file sample.txt, 2. to read and write file sample.txt,3 to exit");
        scanf("%d", &choice);
        if (choice == 1)
        {
            FILE *fp1;
            fp1 = fopen("sample.txt", "r");
            char ch1;
            if (fp1 != NULL)
            {
                while ((ch1 = fgetc(fp1)) != EOF)
                {
                    putchar(ch1);
                }
                fclose(fp1);
            }
            else
            {
                printf("Error");
            }
        }
        else if (choice == 2)
        {
            FILE *fp2, *fp3;
            fp2 = fopen("sample.txt", "r");
            fp3 = fopen("sample.txt", "w");
            char ch2, ch3[30];
            if (fp2 != NULL)
            {
                while ((ch2 = fgetc(fp2)) != EOF)
                {
                    putchar(ch2);
                }
            }
            if (fp3 != NULL)
            {
                fseek(fp2, 0, SEEK_END);
                fseek(fp3, 0, SEEK_END);
                printf("write:");
                getchar();
                fgets(ch3, 30, stdin);
                fprintf(fp3, "%s", ch3);
                fclose(fp2);
                fclose(fp3);
            }
        }
        else if (choice == 3)
        {
            printf("Exiting program.\n");
            break;
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }
}
