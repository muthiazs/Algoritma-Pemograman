// Nama File : Kalkulator Sederhana
// Deskripsi :
// Nama : Muthia Zhafira Sahnah
// NIM : 24060122130071
// Kelas : D

#include <stdio.h>

int main(){
    int iA;
    int iB;
    char operasi;
    int a,b,c,e,f,g;
    float d;

    printf("Masukkan nilai iA : ");
    scanf("%d",&iA);

    printf("\nMasukkan nilai iB : ");
    scanf("%d",&iB);

    printf("\nMasukkan operasi yang ingin dijalankan : ");
    scanf(" %c", &operasi);


   switch (operasi){
        case 'a':
            printf("Hasil operasi adalah %d", iA + iB );
            break;
        case 'b':
            printf("Hasil operasi adalah %d", iA - iB);
            break;
        case 'c':
            printf("Hasil operasi adalah %d", iA * iB);
            break;
        case 'd':
            printf("Hasil operasi adalah %f", (float)iA / iB);
            break;
        case 'e':
            printf("Hasil operasi adalah %d" ,iA / iB);
            break;
        case 'f':
            printf("Hasil operasi adalah %d", iA % iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");

   }

    }

