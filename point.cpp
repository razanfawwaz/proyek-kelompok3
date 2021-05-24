#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 int main(){
  //mendeklarasi variabel
   int pilih,total;
   int poin = 0;
   int poin1, poin2, poin3, poin4, poin5, poin6, poin7, poin8, poin9, poin10;
   char jawab1, jawab2, jawab3, jawab4, jawab5, jawab6, jawab7, jawab8, jawab9, jawab10;

  //fungsi hadiah yang diberikan kepada user
  void hadiah(){
     if(total == 100){
       printf("\n\nSELAMAT! KAMU MEMBAWA PULANG UANG DENGAN NOMINAL Rp100.000.000,-\nDAN MOBIL, PAJAK DITANGGGUNG PEMENANG YAA :)");
     }
     else if(total >= 80 && total < 100){
       printf("\n\nLUAR BIASA! SELAMAT KAMU MEMBAWA UANG DENGAN NOMINAL Rp75.000.000,-\nPAJAK DITANGGUNG PEMENANG YAA :)");
     }
     else if(total >= 60 && total < 80 ){
       printf("\n\nADUH SEDIKIT LAGI, TAPI SELAMAT KAMU JUGA MEMBAWA PULANG UANG DENGAN\nNOMINAL Rp45.000.000,-\nPAJAK DITANGGUNG PEMENANG YAA :)");
     }
     else if(total >= 50 && total < 60 ){
       printf("\n\nJANGAN BERSEDIH, TETAP SEMANGAT YAA :). BTW, KAMU JUGA MENDAPATKAN UANG\nDENGAN NOMINAL Rp10.000.000,-\nPAJAK DITANGGUNG PEMENANG YAA :)");
     }
     else if(total >= 40 && total < 50 ){
       printf("\n\nHUHU, KAMU SUDAH BERUSAHA KOK, JANGAN SEDIH YAA.. KAMU JUGA MENDAPATKAN UANG\nSEBESAR Rp2.500.000,- ,PAJAK DITANGGUNG PEMENANG YAA :)");
     }
     if(total <= 39){
       printf("\n\nYAHHH, KAMU KURANG BERUNTUNG :(, MAAF YAA... SILAHKAN MENCOBA LAGI DI LAIN KESEMPATAN!");
     }
   }

  //fungsi nilai untuk menghitung poin kuis
   void nilai(){
     if(jawab1 == 'b' || jawab1 == 'B'){
       poin1 = poin + 20;
     }else{
       poin1 = 0;
     }
     if(jawab2 == 'c' || jawab2 == 'C'){
       poin2 = poin + 20;
     }else{
       poin2 = 0;
     }
     if(jawab3 == 'b' || jawab3 == 'B'){
       poin3 = poin + 20;
     }else{
       poin3 = 0;
     }
     if(jawab4 == 'b' || jawab4 == 'B'){
       poin4 = poin + 20;
     }else{
       poin4 = 0;
     }
     if(jawab5 == 'a' || jawab5 == 'A'){
       poin5 = poin + 20;
     }else{
       poin5 = 0;
     }
     if(jawab6 == 'c' || jawab6 == 'C'){
       poin6 = poin + 20;
     }else{
       poin6 = 0;
     }
      if(jawab7 == 'd' || jawab6 == 'D'){
       poin7 = poin + 20;
     }else{
       poin7 = 0
     }
      if(jawab8 == 'c' || jawab8 == 'C'){
       poin8 = poin + 20;
     }else{
       poin8 = 0
     }
      if(jawab9 == 'c' || jawab6 == 'C'){
       poin9 = poin + 20;
     }else{
       poin9 = 0
     }
      if(jawab10 == 'c' || jawab10 == 'C'){
       poin10 = poin + 20;
     }else{
       poin10 = 0
     }

     total = poin1 + poin2 + poin3 + poin4 + poin5 + poin6 + poin7 + poin8 + poin9 + poin10;
     printf("\nWah Kamu Berhasil Mendapatkan Poin Sebanyak %d", total);
   }

  //fungsi yang menampilkan soal kuis
   void soal(){
     printf("\t\tREADY");
     getch();
     printf("\n\n\t\t SET");
     getch();
     printf("\n\n\t\tGO!!!");
     getch();
     printf("\n\n------------Kuis Dimulai--------------");

     getch();

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

    printf("\nSoal 6.\nHewan manakah yang memiliki metamorfosis sempurna?\n");
    printf("a. Ular\nb. Ayam\nc. kupu-kupu\nd. Kucing\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab6);
    if(jawab5 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
     getch();

    printf("\nSoal 7.\nSalah satu contoh hewan omnivora adalah?\n");
    printf("a. Kambing\nb. Harimau\nc. Belalang\nd. Beruang\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab7);
    if(jawab5 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
     getch();


   }

   //fungsi menyambut user yang ingin mengerjakan kuis
   void welcome() {
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
          soal();
          break;
      default:
            exit(0);
    }
}
  //tampilan awal
  printf("================ Kuis Biologi ===============\n");
  printf("<3 AYO MENJAWAB KUIS---AGAR SEMAKIN PINTAR <3\n\n");

  welcome();
  nilai();
  hadiah();

  printf("\n\n------------Kuis Telah Selesai--------------");
  return 0;
}
