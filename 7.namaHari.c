// Nama File : bilInteger.c
// Deskripsi :
// Nama : Muthia Zhafira Sahnah
// NIM : 24060122130071
// Kelas : D

#include <stdio.h>
void main(){
    int nomorhari;

    printf("Masukkan nomor hari: ");
    scanf("%d", &nomorhari);

    switch(nomorhari){
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jumat");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        default:
            printf("Masukkan nomor hari yang benar");

    }
}
