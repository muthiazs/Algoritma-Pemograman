// Nama File :
// Deskripsi :
// Nama : Muthia Zhafira Sahnah
// NIM : 24060122130071
// Kelas : D

#include <stdio.h>
//Kamus
int main(){
   float kecepatan, waktu, gravitasi = 10 ,jarak;
//Algoritma
   printf("Masukkan kecepatan: ");
   if(scanf("%f", &kecepatan)==1){
   printf("Masukkan waktu: ");
   scanf("%f", &waktu);


   jarak = (kecepatan*waktu) - (0.5 *(gravitasi*waktu*waktu));

   if (kecepatan>0||waktu>0){

   printf("\n\n jarak parabola nya adalah %f", jarak );
   }
   }
   else{
       return -1;
   }

}


