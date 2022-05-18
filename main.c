#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "soal.h"

int main(int argc, char * argv[]){
    char usernameInput[20], passwordInput[20];
    char usernamefile[20], passwordfile[20];
    FILE * f; 
    
    // checking the CLA syntax
    if(argc != 3){
        printf("Failed login !!");
        printf("\nHow to run the program: ./filename username password\n");
    }

    // copying the CLA to the variables
    strcpy(usernameInput, argv[1]);
    strcpy(passwordInput, argv[2]);

    // opening the database file
    f = fopen("D:\\New folder\\bahasa C\\databaseproyek\\loginproyek.bin","rb");

    // checking whether the file can be open or not  
    if(f == NULL){
        printf("Errorr !!");
        exit(1);
    }

    // reads data from the database file
    fread(usernamefile,sizeof(char),sizeof(usernamefile)/sizeof(char),f);
    fread(passwordfile,sizeof(char),sizeof(passwordfile)/sizeof(char),f);

    if((strcmp(usernameInput, usernamefile) == 0) && (strcmp(passwordInput, passwordfile) == 0)){
        printf("Succesfully login\n");
        goto main;
    }
    else{
        printf("Failed login, please re-login");
        exit(1);
    }
    
    ////////////////////////////////////////// Game Session ///////////////////////////////////////////////////
    
    main :
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
                uang[i]=2000000; 
            }

            else if(soal==2){
                soal2();
                uang[i]= 4000000;
            }

            else if(soal==3){
                soal3();
                uang[i]=8000000;
            } 
            
            else if(soal==4){
                soal4();
                uang[i]=16000000;
            }

            else if(soal==5){
                soal5();
                uang[i]=32000000;
            }

            else if(soal==6){    
                soal6();
                uang[i]=64000000;
            }

            else if(soal==7){
                soal7();
                uang[i]=128000000;
            }

            else if(soal==8){
                soal8();
                uang[i]=256000000;
            }

            else if(soal==9){
                soal9();    
                uang[i]=512000000;
            }

            else{ 
                soal10();
                uang[i]=1000000000;

            }
            
        }
    }
    
    if(menu == 2){
        printf("\nThis game is made to complete our final programming exam project\n");
        printf("The members who are involved are fagih akram, arrijalul khairi, nuzulurrahmah\n");
        printf("and furqan al ghifari. We hope you enjoy it. Have fun...\n\n");
        
        printf("1. Exit\n\n");
        printf("Enter your option: ");
        scanf("%d", &menu1);
        if(menu1 == 1){
            goto option;
        }
    }
    if(menu == 3){
        exit(1);
    }



    return 0;
}
