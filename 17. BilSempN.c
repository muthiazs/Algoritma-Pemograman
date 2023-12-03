#include<stdio.h>

int main(){
    int N, i, j, faktor;

    printf("Masukkan nilai N:  ");
    scanf("%d", &N);

    if (N<=0){
        printf("Masukkan harus positif");
    }
    else{
        printf("Bilangan sempurna nya adalah ");
        for (i=1;i<=N;i++){
            faktor=0;
             for (j=1; j<=(i-1); j++){
                if (i%j==0){
                    faktor = faktor+j;
                }
             }
             if (faktor==i){
                printf("%d ", j);
             }


        }
    }
}
