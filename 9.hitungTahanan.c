// Nama File :
// Deskripsi :
// Nama : Muthia Zhafira Sahnah
// NIM : 24060122130071
// Kelas : D

#include<stdio.h>

int main(){
    int a,b,c;

    printf("Masukkan nilai a : ");
    if(scanf("%d", &a)==1){
      if(a>=0){
        printf("Masukkan nilai b : ");
        scanf("%d", &b);

        printf("Masukkan nilai c : ");
        scanf("%d", &c);

       if (a<0 || b<0 || c<0){
        printf("Masukan tahanan tidak boleh negatif");
       }else{
        printf("total tahanan adalah %d", a+b+c);
    }
}
}
else{
    printf("Tahanan tidak boleh negatif");
}
}

