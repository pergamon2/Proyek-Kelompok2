#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]){
    // blok Registrasi Akun 
    char username[20], password1[20], password2[20];
    FILE * fp = fopen("D:\\New folder\\bahasa C\\databaseproyek\\loginproyek.bin","wb");

    if(fp == NULL){
        printf("Erorr.. !!");
        exit(1);
    }

    printf("[======== Login Session =========]\n");
    printf("Enter your username: ");
    gets(username);
    printf("Enter your password: ");
    gets(password1);
    pass: 
    printf("Re-confirm password: ");
    gets(password2);

    while(password1 != password2){
        if(strcmp(password1, password2) == 0){
            printf("\nYour account has been created");
            break;
        }
        else{
            printf("\nInvalid password\n");
            goto pass;
        }
    }
    
    fwrite(username,sizeof(char),sizeof(username)/sizeof(char),fp);
    fwrite(password1,sizeof(char),sizeof(password1)/sizeof(char),fp);

    fclose(fp);
    
    return 0;
}