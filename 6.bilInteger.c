// Nama File : bilInteger.c
// Deskripsi : tuliskanlah ke layar bahwa bilangan i tersebut sebagai bilangan bulat positif atau nol atau bulat negative.
//Tetapi jika yang diinputkan bukan sebuah bilangan maka akan mengeluarkan pesan “Bukan termasuk sebuah bilangan”.
// Nama : Muthia Zhafira Sahnah
// NIM : 24060122130071
// Kelas : D
#include <stdio.h>
//Kamus
  int main(){
      int i;

//Algoritma
     printf("Masukkan nilai i : ");
     scanf("%d", &i);
     if (i>0){
        printf("Termasuk bilangan positif");
     }else if (i<0){
        printf("Termasuk bilangan negatif");
     }else if (i==0){
        printf("Termasuk bilangan nol");
     }else{
        printf("bukan bilangan");
        }
  }
