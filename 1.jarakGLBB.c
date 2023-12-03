// Nama File : jarakGLBB.c
// Deskripsi : Menghitung dan menampilkan jarak
// Nama : Muthia Zhafira Sahnah
// NIM : 24060122130071
// Kelas : D

#include <stdio.h>

//Kamus Lokal
int main(){
   float kecepatan, waktu, percepatan, jarak;


//Algoritma
   printf("Masukkan Kecepatan awal (m/s):  ");
   if (scanf("%f" ,&kecepatan)==1){
   printf("Masukkan waktu(s): ");
   scanf("%f", &waktu);
   printf("Masukkan percepatan: ");
   scanf("%f",&percepatan);


   jarak = kecepatan*waktu + 0.5* (percepatan*waktu*waktu);

   if (kecepatan>0||waktu>0||percepatan>0)
   {
   printf("\n\n Jaraknya adalah : %f m ", jarak);
   }
   }
   else{
    return -1;
   }




}
