// Nama File :
// Deskripsi :
// Nama : Muthia Zhafira Sahnah
// NIM : 24060122130071
// Kelas : D

#include <stdio.h>

int main(){
   float massa;
   float kecepatan;
   float jari2;
   float gaya;

   printf("Masukkan massa(kg) : ");
   if (scanf("%f", &massa)==1){
   printf("Masukkan Kecepatan(m/s):");
   scanf("%f",&kecepatan);
   printf("Masukkan jari2(m): ");
   scanf("%f", &jari2);

   gaya = (massa*(kecepatan*kecepatan*jari2));

   if (massa>0||kecepatan>0||jari2>0){
   printf("\n\n besar gaya : %f N", gaya);
   }
   }
   else{
    return -1;
   }
}
