#include<stdio.h>

int main (){
   int b,k;
   printf("Masukkan nilai b : ");
   scanf("%d", &b);
   printf("Masukkan nilai k : ");
   scanf("%d", &k);
   int T[b][k];
   int i, j;
   int jumlah_baris , jumlah_kolom;

   for (i=0;i<b;i++){
        for (j=0;j<k;j++){
    scanf("%d", &T[i][j]);
   }
   }

   for (i=0;i<b;i++){
    jumlah_baris=0;
    for (j=0;j<k;j++){
        jumlah_baris = jumlah_baris + T[i][j];
        }
        printf(" \n\n Jumlah baris %d = %d", i+1, jumlah_baris);
   }


   for(i=0;i<b;i++){
    jumlah_kolom=0;
    for (j=0;j<k;j++){
        jumlah_kolom= jumlah_kolom + T[j][i];
    }
     printf(" \n\n Jumlah kolom %d = %d", i+1, jumlah_kolom);
   }


}
