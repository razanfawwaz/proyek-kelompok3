#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (char *login[])
{
    char usernameInput[10], passwordInput[10];

    printf("Selamat datang, silahkan masukkan username dan password anda!\n");
    printf("Username: ");
    scanf(" %[^\n]s", usernameInput);
    printf("Password: ");
    scanf(" %[^\n]s", passwordInput);
    FILE *fpr;

    if ((fpr = fopen("database/login.bin", "rb")) == NULL){
        printf("File tidak dapat dibuka!");
        return EXIT_FAILURE;
    }

    char userData[20];
    fread(userData, sizeof(char), sizeof(userData)/sizeof(char), fpr);

    fclose(fpr);

    char *string[3];
    char username[20], password[20];

    int ctrl = 0;

    string[0] = strtok(userData, "@");
    while (string[ctrl++] != NULL) 
    {
        string[ctrl] = strtok(NULL, "@");
    }

    strcpy(username, string[0]);
    strcpy(password, string[1]);
    

    if((strcmp(usernameInput, username) == 0) && (strcmp(passwordInput, password) == 0)){
        printf("Halo %s selamat bermain!");
    }
    else {
        printf("Username atau Password anda salah!");
    }
    return 0;
}