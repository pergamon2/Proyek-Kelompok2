#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"

int main(int argc, char * argv[]){

    char username[20], password[20], repassword[20];
    char usernamelog[20], passwordlog[20];
    char input1;

    if (argc == 3) {
        goto login;
    }
    
    FILE *reg;

    printf("Welcome\n");
    printf("Please Create account first (y/n): ");
    scanf("%s", &input1);
    getchar();

    
    if(input1 == 'y'){
        reg = fopen("DataBase.bin", "wb");  
        if(reg == NULL){
            printf("Erorr.. !!\n");
            exit(1);
        }
        printf("\n======== Register Session =========\n");
        printf("->Enter your username: ");
        gets(username);
        printf("->Enter your password: ");
        gets(password);
        pass: 
        printf("->Re-confirm password: ");
        gets(repassword);
        printf("===================================\n");

        while(password != repassword){
            if(strcmp(password, repassword) == 0){
                printf("\nYour account has been created\n");
                break;
            }
            else{
                printf("\nInvalid password\n");
                goto pass;
            }
        }
        
        fwrite(&username,sizeof(char),sizeof(username)/sizeof(char),reg);
        fwrite(&password,sizeof(char),sizeof(password)/sizeof(char),reg);
        
        fclose(reg);
        printf("Please login by : ./FileMainProgram.exe username password\n");

        return EXIT_SUCCESS;
    } else {
        return EXIT_FAILURE;
    }

    login:
    strcpy(usernamelog, argv[1]);
    strcpy(passwordlog, argv[2]);

    reg = fopen("DataBase.bin", "rb");

    if(reg == NULL){
        printf("File didn't exist\n");
        exit(1);
    }

    fread(username, sizeof(char), sizeof(username)/sizeof(char), reg);
    fread(password, sizeof(char), sizeof(password)/sizeof(char), reg);

    if(strcmp(username,usernamelog) == 0 && strcmp(password,passwordlog) == 0) {
        printf("\tLogin Success\n\tWelcome My Friend\n");
    } else{
        printf("Usernama/Wrong Password\nPlease re-Login and input the correct Usernama/Password\n");
        exit(2);
    }    

    fclose(reg);
    
 //////////////////////////////////////////////////////////////////////////////////////////////////////    
   
    int menu, menu1;
    option:
    printf("\n");
    printf("\t==== Who Wants to be a Millionaire ====\n");
    printf("\t|              MAIN MENU              |\n");
    printf("\t|               1. PLay               |\n");
    printf("\t|               2. About              |\n");
    printf("\t|               3. Quit               |\n");
    printf("\t=======================================\n");
    printf("\nEnter your option: ");
    scanf("%d", &menu);

    if(menu == 1){
        for(soal=1; soal<=10; soal++){
            
            if(soal==1){
                soal1(); 
            }

            else if(soal==2){
                soal2();
            }

            else if(soal==3){
                soal3();
            } 
            
            else if(soal==4){
                soal4();
            }

            else if(soal==5){
                soal5();
            }

            else if(soal==6){    
                soal6();
            }

            else if(soal==7){
                soal7();
            }

            else if(soal==8){
                soal8();
            }

            else if(soal==9){
                soal9();    
            }

            else{ 
                soal10();
            }
            
        }
    }
    
    if(menu == 2){
        printf("This game is made to complete our final programming exam project\n");
        printf("The members who are involved are fagih akram, arrijalul khairi, nuzulurrahmah\n");
        printf("and furqan al ghifari. We hope you enjoy it. Have fun...\n\n");
        
        printf("1. Exit\n\n");
        printf("Enter your option: ");
        scanf("%d", &menu1);
        if(menu1 == 1){
            goto option;
        }
    } else {
        exit(1);
    }


    return 0;
}
