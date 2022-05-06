#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
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
        goto game;
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
    }
    if(menu == 3){
        exit(1);
    }

    game: 
    printf("Let's play");

    return 0;
}