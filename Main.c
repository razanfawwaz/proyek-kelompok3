#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main (int loginSystem, char *login[])
{
   
    if (loginSystem != 3)
    {
        printf("Anda harus login terlebih dahulu!");
        printf("\nCara penggunaan : ./namafile username password");
    }

    char usernameInput[10], passwordInput[10];
    strcpy(usernameInput, login[1]);
    strcpy(passwordInput, login[2]);
    //pointer
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
        printf("Halo %s, selamat bermain!");
    }
    else {
        printf("Username atau Password anda salah!");
    }

    // deklarasi variabel soal

    int pilih,total;
    int poin = 0;
    int poin1, poin2, poin3, poin4, poin5, poin6, poin7, poin8, poin9, poin10;
    char jawab1, jawab2, jawab3, jawab4, jawab5, jawab6, jawab7, jawab8, jawab9, jawab10;


  //tampilan awal
  printf("\n\n================ !QUIZ BERHADIAH! ===============\n");
  printf("<3 AYO MENJAWAB KUIS---AGAR SEMAKIN PINTAR <3\n\n");

//   welcome();
    printf("1. Kuis\n");
    printf("2. Keluar\n");

    printf("Input Pilihan Anda : ");
    scanf("%d", &pilih);
    getchar();

    if (pilih > 2) {
      printf("\nMaaf, input anda tidak sesuai!\n");
      printf("Pilihan anda : ");
      scanf("%d", &pilih);
      getchar();
    }
    switch (pilih){
      case 1:
     printf("\t\t--- Aturan Main ---\n");
     printf("- Soal yang akan anda jawab ada 10 soal\n");
     printf("- Bobot per soal adalah 10, jika jawaban anda salah maka anda tidak mendapatkan poin dari soal tersebut\n");
     printf("- Jika anda mendapatkan 100 poin, maka anda akan mendapatkan hadiah uang sebesar Rp. 100.000.000 dan mobil\n");
     printf("- Jika anda mendapatkan 81 hingga 99 poin, maka anda mendapatkan hadiah uang sebesar Rp. 75.000.000\n");
     printf("- Jika anda mendapatkan 61 hingga 80 poin, maka anda mendapatkan hadiah uang sebesar Rp. 45.000.000\n");
     printf("- Jika anda mendapatkan 41 hingga 60 poin, maka anda mendapatkan hadiah uang sebesar Rp. 10.000.000\n");
     printf("- Jika anda mendapatkan 21 hingga 40 poin, maka anda mendapatkan hadiah uang sebesar Rp.  2.500.000\n");
     printf("- Jika anda mendapatkan 20 poin ke bawah, maka anda tidak mendapatkan hadiah apapun\n");
     printf("- Pajak hadiah yang anda dapatkan ditanggung masing-masing peserta\n");
     printf("\n\nApakah anda sudah siap untuk memulai?");
     printf("\nTekan Enter jika anda siap untuk mulai...");
     getch();
     
     printf("\n\n\t\tREADY");
     getch();
     printf("\n\n\t\t SET");
     getch();
     printf("\n\n\t\tGO!!!");
     getch();

     printf("\n\n------------Kuis Dimulai--------------\n\n");
     printf("\n\nSoal 1.\nRangka tersusun dari?\n");
     printf("a. Tulang dan daging\nb. Tulang dan otot\nc. Tulang dan kulit\nd. Tulang saja\n");
     printf("Input jawaban (huruf) : ");
     scanf(" %c",&jawab1);
     if(jawab1 == 'b'){
       printf("Hore! Jawaban Anda Benar! >.<\n");
     } else {
       printf("Ups, Jawaban Anda Kurang Tepat :(\n");
     }
       getch();

     printf("\nSoal 2.\nPadi di sawah pak Didi dimakan burung,");
     printf("lalu burung tersebut\nditangkap untuk menjadi makanan ular. Urutan ini disebut?\n");
     printf("a. Siklus Kehidupan\nb. Jaring Makanan\nc. Rantai Makanan\nd. Rantai Kehidupan\n");
     printf("Input jawaban (huruf) : ");
     scanf(" %c",&jawab2);
     if(jawab2 == 'c'){
       printf("Hore! Jawaban Anda Benar! >.<\n");
     } else {
       printf("Ups, Jawaban Anda Kurang Tepat :(\n");
     }
       getch();

     printf("\nSoal 3.\nHubungan antara benalu dan pohon mangga membentuk simbiosis?\n");
     printf("a. Mutualisme\nb. Parasitisme\nc. Komensalisme\nd. Netralisme\n");
     printf("Input jawaban (huruf) : ");
     scanf(" %c",&jawab3);
     if(jawab3 == 'b'){
       printf("Hore! Jawaban Anda Benar! >.<\n");
     } else {
       printf("Ups, Jawaban Anda Kurang Tepat :(\n");
     }
       getch();

     printf("\nSoal 4.\nBenda yang bentuknya berubah-ubah mengikuti wadah,tetapi\nvolumenya tetap disebut?\n");
     printf("a. Padat\nb. Cair\nc. Gas\nd. Semua benar\n");
     printf("Input jawaban (huruf) : ");
     scanf(" %c",&jawab4);
     if(jawab4 == 'b'){
       printf("Hore! Jawaban Anda Benar! >.<\n");
     } else {
       printf("Ups, Jawaban Anda Kurang Tepat :(\n");
     }
       getch();

    printf("\nSoal 5.\nTelur kupu-kupu menetas menjadi?\n");
    printf("a. Ulat\nb. Kepompong\nc. Berudu\nd. Pupa\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab5);
    if(jawab5 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
       getch();
      
    printf("\nSoal 6.\nHewan yang memiliki metamorfosis sempurna adalah?\n");
    printf("a. Ular\nb. Kuda\nc. Kupu-kupu\nd. Kucing\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab6);
    if(jawab6 == 'c'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
       getch();
      
    printf("\nSoal 7.\nYang termasuk hewan omnivora adalah?\n");
    printf("a. Beruang\nb. Kupu-kupu\nc. Domba\nd. Sapi\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab7);
    if(jawab7 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
       getch();
      
    printf("\nSoal 8.\n2 + 2 x 0?\n");
    printf("a. 0\nb. 4\nc. a dan d benar\nd. 2\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab8);
    if(jawab8 == 'd'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
      getch();
    printf("\nSoal 9.\nIbu Kota Sulawesi Tenggara?\n");
    printf("a. Kendari\nb. Banda Aceh\nc. Kupang\nd. Ambon\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab9);
    if(jawab9 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
      getch();
      
    printf("\nSoal 10.\nTokoh di Attack on Titan?\n");
    printf("a. Upin\nb. Levi\nc. Nobita\nd. Saitama\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab10);
    if(jawab10 == 'b'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
        //   soal();
          break;
      default:
            exit(0);
    }
//   nilai();
     if(jawab1 == 'b' || jawab1 == 'B'){
       poin1 = poin + 10;
     }else{
       poin1 = 0;
     }
     if(jawab2 == 'c' || jawab2 == 'C'){
       poin2 = poin + 10;
     }else{
       poin2 = 0;
     }
     if(jawab3 == 'b' || jawab3 == 'B'){
       poin3 = poin + 10;
     }else{
       poin3 = 0;
     }
     if(jawab4 == 'b' || jawab4 == 'B'){
       poin4 = poin + 10;
     }else{
       poin4 = 0;
     }
     if(jawab5 == 'a' || jawab5 == 'A'){
       poin5 = poin + 10;
     }else{
       poin5 = 0;
     }
       if(jawab6 == 'c' || jawab6 == 'C'){
       poin6 = poin + 10;
     }else{
       poin6 = 0;
     }
      if(jawab7 == 'a' || jawab7 == 'A'){
       poin7 = poin + 10;
     }else{
       poin7 = 0;
     }
      if(jawab8 == 'd' || jawab5 == 'D'){
       poin8 = poin + 10;
     }else{
       poin8 = 0;
     }
       if(jawab9 == 'a' || jawab9 == 'A'){
       poin9 = poin + 10;
     }else{
       poin9 = 0;
     }
       if(jawab10 == 'b' || jawab10 == 'B'){
       poin10 = poin + 10;
     }else{
       poin10 = 0;
     }
     total = poin1 + poin2 + poin3 + poin4 + poin5 + poin6 + poin7 + poin8 + poin9 + poin10;
     printf("\nWah Kamu Berhasil Mendapatkan Poin Sebanyak %d", total);
     printf("\n\n------------Kuis Telah Selesai--------------");
//   hadiah();
  if(total == 100){
       printf("\n\nSELAMAT! KAMU MEMBAWA PULANG UANG DENGAN NOMINAL Rp100.000.000,-\nDAN MOBIL, PAJAK DITANGGGUNG PEMENANG YAA :)");
     }
     else if(total >= 81 && total < 100){
       printf("\n\nLUAR BIASA! SELAMAT KAMU MEMBAWA PULANG UANG DENGAN NOMINAL Rp75.000.000,-\nPAJAK DITANGGUNG PEMENANG YAA :)");
     }
     else if(total >= 61 && total <= 80 ){
       printf("\n\nADUH SEDIKIT LAGI, TAPI SELAMAT KAMU JUGA MEMBAWA PULANG UANG DENGAN\nNOMINAL Rp45.000.000,-\nPAJAK DITANGGUNG PEMENANG YAA :)");
     }
     else if(total >= 41 && total <= 60 ){
       printf("\n\nJANGAN BERSEDIH, TETAP SEMANGAT YAA :). BTW, KAMU JUGA MENDAPATKAN UANG\nDENGAN NOMINAL Rp10.000.000,-\nPAJAK DITANGGUNG PEMENANG YAA :)");
     }
     else if(total >= 21 && total <= 40 ){
       printf("\n\nHUHU, KAMU SUDAH BERUSAHA KOK, JANGAN SEDIH YAA.. KAMU JUGA MENDAPATKAN UANG\nSEBESAR Rp2.500.000,- ,PAJAK DITANGGUNG PEMENANG YAA :)");
     }
     if(total <= 20){
       printf("\n\nYAHHH, KAMU KURANG BERUNTUNG :(\nMAAF YAA... SILAHKAN MENCOBA LAGI DI LAIN KESEMPATAN!");
     }
   //fungsi nilai untuk menghitung poin kuis

  return 0;
}
