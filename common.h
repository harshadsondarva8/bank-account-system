#ifndef COMMON_H
#define COMMON_H

// Creating a structure to store
// data of the user
typedef struct
{
    char username[50];
    int date, month, year;
    char pnumber[15];
    char adharnum[20];
    char fname[20];
    char lname[20];
    char fathname[20];
    char mothname[20];
    char address[50];
    char typeaccount[20];
} pass;

// Structure to keep track
// of amount transfer
typedef struct
{
    char usernameto[50];
    char userpersonfrom[50];
    long int money1;
} money;

typedef struct
{
    char password[50];
} userpass;

#endif // COMMON_H