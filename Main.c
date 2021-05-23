#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
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
    

    return 0;
}