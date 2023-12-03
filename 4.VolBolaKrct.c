// Nama File :
// Deskripsi :
// Nama : Muthia Zhafira Sahnah
// NIM : 24060122130071
// Kelas : D

#include <stdio.h>

int main(){
    int r, Vb, Vk;

    printf("Masukkan nilai jari-jari: ");
    if (scanf("%d", &r)==1){

    Vb = (1.33*3.1415*r*r*r);
    Vk = (0.5*Vb);

    if (r>0){
    printf("\nVolume bola adalah %d", Vb);
    printf("\nVolume kerucut adalah %d", Vk);
    }
    }
   else{
    return -1;
   }
}
