#include<stdio.h>

int main(){
    int N,i,jumlah=0;

    printf("Masukkan bilangan integer: ");
    scanf("%d",&N);

    if (N<=0){
        printf("Integer harus positif");
    }
    else{
        for (i=1;i<N;i++){
            if (N%i==0){
            jumlah +=i;
        }
        }
        if (jumlah==N){
            printf("Bilangan sempurna");
        }
        else{
            printf("Bukan bilangan sempurna");
        }
    }
    }

