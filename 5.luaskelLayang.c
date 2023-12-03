// Nama File :
// Deskripsi :
// Nama : Muthia Zhafira Sahnah
// NIM : 24060122130071
// Kelas : D

#include <stdio.h>

//Kamus
int main(){
    float sisi1, sisi2, dia1, dia2, Luas, Keliling;

//Algoritma

   printf(" Masukkan s1 : ");
   if (scanf("%f", &sisi1)==1){
   printf(" Masukkan s2 : ");
   scanf("%f", &sisi2);
   printf("Masukkan d1 :");
   scanf("%f", &dia1);
   printf("Masukkan d2 :");
   scanf("%f", &dia2);

   Luas = (0.5* dia1*dia2);
   Keliling = (2 * (sisi1+sisi2));


   if (sisi1>0||sisi2>0||dia1>0||dia2>0){
   printf("luas layang2 adalah %f \n keliling layang2 adalah %f", Luas, Keliling);
   }
   }
   else{
    return -1;
   }

}
