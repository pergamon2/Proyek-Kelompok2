#include <stdio.h>

int i;
int soal;
long int uang[10];
char jawab;


void GameOver(){
    printf("\n\n\t\t\t\t\t\t Sorry, You're Wrong\n\t\t\t\t\t\tThankyou for Playing! \n\n\n");
    printf("\t\t\t\t\t\t  You Got Rp. %li", uang[soal-1]);
}


void lanjut(){
    printf("\n\n\t\t\t\t\t\t\tHurray!! You're Right");
    soal++;
    }
    


void soal1()
    {
    printf("\nLEVEL 1\n\n");
    printf("Apakah nama Ibukota dari negara Rusia?\n");
    printf("A. Moskow\n");//bener
    printf("B. Berc\n");
    printf("C. Praha\n");
    printf("D. Jakarta\n");

    printf("Masukkan jawaban Anda: ");
    scanf("%s",&jawab);

    if (jawab == 'A' || jawab == 'a'){
            lanjut();
    }

    else{
        
        GameOver();
        exit(1);
    }   
        
    }

void soal2()
    {
    printf("\nLEVEL 2\n\n");
    printf("Dibawah ini yang termasuk keajaiban dunia, kecuali? \n");
    printf("A. Patung Liberty\n");
    printf("B. Menara Pisa\n");
    printf("C. Acropolis\n");
    printf("D. Giant's Causeway\n");//bener

    printf("Masukkan jawaban Anda: ");
    scanf("%s", &jawab);

    if (jawab == 'D' || jawab == 'd'){
        lanjut();
    }

    else{
        GameOver();
        exit(1);
    }   
    
    }

void soal3()
    {
    printf("\nLEVEL 3\n\n");
    printf("Siapakah orang yang dijuluki sebagai Bapak Pendidikan Nasional? \n");
    printf("A. Soekarno\n");
    printf("B. Ki Hajar Dewantara\n");//bener
    printf("C. Moehammad Hatta\n");
    printf("D. Sutat Syahrir\n");

    printf("Masukkan jawaban Anda: ");
    scanf("%s", &jawab);

    if (jawab == 'B' || jawab == 'b'){
        lanjut();
    }

    else{
        GameOver();
        exit(1);
    } 

    }

void soal4()
    {
    printf("\nLEVEL 4\n\n");
    printf("Kapankah nota kesepahaman antara Pemerintah Republik Indonesia dan Gerakan Aceh Merdeka (GAM) ditandatangani? \n");
    printf("A. 18 Agustus 2005\n");
    printf("B. 25 Mei 2005\n");
    printf("C. 15 Agustus 2005\n");//bener
    printf("D. 05 Mei 2005\n");

    printf("Masukkan jawaban Anda: ");
    scanf("%s", &jawab);

    if (jawab == 'C' || jawab == 'c'){
        lanjut();
    }

    else{
        GameOver();
        exit(1);
    } 

    }

void soal5()
    {
    printf("\nLEVEL 5\n\n");
    printf("Siapakah yang pertama kali menemukan bahasa pemrograman? \n");
    printf("A. Katherine Johnson\n");
    printf("B. Proccasian Dethella\n");
    printf("C. Augusta Ada Byron\n");//bener
    printf("D. Marie Curie\n");

    printf("Masukkan jawaban Anda: ");
    scanf("%s", &jawab);

    if (jawab == 'C' || jawab == 'c'){
        lanjut();
    }

    else{
        GameOver();
        exit(1);
    }
    }


void soal6()
    {
    printf("\nLEVEL 6\n\n");
    printf("J.K Rowling adalah seorang penulis novel terkenal berjudul  Da Vinci Code\n");
    printf("A. True\n");
    printf("B. False\n");//bener

    printf("Masukkan jawaban Anda: ");
    scanf("%s", &jawab);

    if (jawab == 'B' || jawab == 'b'){
        lanjut();
    }

    else{
        GameOver();
        exit(1);
    }
    }


void soal7()
    {
    printf("\nLEVEL 7\n\n");
    printf("Dorothy Vaughan adalah perempuan pertama dari kelompok kulit hitam yang menjadi anggota komputasi di NASA\n");
    printf("A. True\n");//bener
    printf("B. False\n");

    printf("Masukkan jawaban Anda: ");
    scanf("%s", &jawab);

    if (jawab == 'A' || jawab == 'a'){
        lanjut();
    }

    else{
        GameOver();
        exit(1);
    } 
    }
    
void soal8()
    {
    printf("\nLEVEL 8\n\n");
    printf("Kalpataru adalah nama penghargaan yang diberikan kepada orang yang berjasa dalam pelestarian lingkungan hidup\n");
    printf("A. True\n");//bener
    printf("B. False\n");

    printf("Masukkan jawaban Anda: ");
    scanf("%s", &jawab);

    if (jawab == 'A' || jawab == 'a'){
        lanjut();
    }

    else{
        GameOver();
        exit(1);
    }
    }

void soal9()
    {
    printf("\nLEVEL 9\n\n");
    printf("1+2+3+4+5+6+7+8+9+10=50\n");
    printf("A. True\n");
    printf("B. False\n");//bener

    printf("Masukkan jawaban Anda: ");
    scanf("%s", &jawab);

    if (jawab == 'B' || jawab == 'b'){
    lanjut();
    }

    else{
        GameOver();
        exit(1);
    } 

    }

void soal10()
    {
    printf("\nLEVEL 10\n\n");
    printf("Rukun Iman yang Pertama adalah mengucap dua kalimat syahadat\n");
    printf("A. True\n");
    printf("B. False\n");//bener

    printf("Masukkan jawaban Anda: ");
    scanf("%s", &jawab);

    if (jawab == 'B' || jawab == 'b'){

    system("cls");
    printf("\n\n\t\t\t\t\t ===Congrats!! You are a Billioner===\n"); 
    printf("\t\t\t\t\t\t**Rp. 1.000.000.000**\n");
    printf("\t\t\t\t\t\t**Rp. 1.000.000.000**\n");
    printf("\t\t\t\t\t\t**Rp. 1.000.000.000**\n");
    }

    else{
        GameOver();
        exit(1);
    } 
    
    }


