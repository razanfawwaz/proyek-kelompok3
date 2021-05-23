#include <stdio.h>
#include <stdlib.h>
int main ()
{
    FILE *fpr;

    if ((fpr = fopen("database/login.bin", "rb")) == NULL){
        printf("File tidak dapat dibuka!");
        return EXIT_FAILURE;
    }

    
    return 0;
}