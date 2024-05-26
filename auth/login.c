#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Login function to check
// the username of the user

void login(void)
{
    system("cls");

    char username[50];
    char password[50];

    int i, j, k;
    char ch;
    FILE *fp, *fu;
    pass u1;
    userpass u2;

    // Opening file of
    // user data
    fp = fopen("users.txt", "rb");

    if (fp == NULL)
    {
        printf("ERROR IN OPENING FILE");
    }
    gotoxy(34, 2);
    printf(" ACCOUNT LOGIN ");
    gotoxy(7, 5);
    printf("***********************************************"
           "********************************");

    gotoxy(35, 10);
    printf("==== LOG IN ====");

    // Take input
    gotoxy(35, 12);
    printf("USERNAME.. ");
    scanf("%s", &username);

    gotoxy(35, 14);
    printf("PASSWORD..");

    // Input the password
    for (i = 0; i < 50; i++)
    {
        ch = getch();
        if (ch != 13)
        {
            password[i] = ch;
            ch = '*';
            printf("%c", ch);
        }

        else
            break;
    }

    // Checking if username
    // exists in the file or not
    while (fread(&u1, sizeof(u1),
                 1, fp))
    {
        if (strcmp(username,
                   u1.username) == 0)
        {
            loginsu();
            display(username);
        }
        else
        {
            loginfa();
        }
    }

    // Closing the file
    fclose(fp);
}

// Redirect after
// successful login
void loginsu(void)
{
    int i;
    FILE *fp;
    pass u1;

    system("cls");
    printf("Fetching account details.....\n");
    for (i = 0; i < 20000; i++)
    {
        i++;
        i--;
    }

    gotoxy(30, 10);
    printf("LOGIN SUCCESSFUL....");
    gotoxy(0, 20);
    printf("Press enter to continue");

    getch();
}

// Failed login
void loginfa(void)
{
    int i;
    FILE *fp;
    pass u1;

    system("cls");
    gotoxy(30, 10);
    printf("LOGIN FAILED....");
    gotoxy(0, 20);

    exit(0);
}