#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 int main(){
   int pilih;
   char jawab1, jawab2, jawab3, jawab4, jawab5;


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

  printf("\n\n------------Kuis Telah Selesai--------------");
  return 0;
}
