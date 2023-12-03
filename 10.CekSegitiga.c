// Nama File :
// Deskripsi :
// Nama : Muthia Zhafira Sahnah
// NIM : 24060122130071
// Kelas : D

#include <stdio.h>

int main(){
    int sisi1;
    int sisi2;
    int sisi3;

    printf("Masukkan sisi1 : ");
    scanf("%d", &sisi1);

    printf("Masukkan sisi2 : ");
    scanf("%d", &sisi2);

    printf("Masukkan sisi3: ");
    scanf("%d", &sisi3);


    if (sisi1<0 || sisi2<0 || sisi3<0){
        printf("Terdapat nilai yang bukan sisi segitiga");

    }else if (sisi1==sisi2 && sisi1==sisi3){
        printf("Segitiga sama sisi");

    }else if ((sisi1==sisi2 && sisi1!=sisi3)||(sisi1==sisi3&& sisi1!=sisi2)|| (sisi2==sisi3 && sisi1!=sisi2)){
        printf("Segitiga sama kaki");

    }else{
       printf("Segitiga sembarang");
    }


}
