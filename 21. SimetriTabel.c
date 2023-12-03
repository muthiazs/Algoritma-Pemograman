#include<stdio.h>

int main(){
    int N,M;
    printf("Masukkan ukuran tabel 1 : ");
    scanf("%d",&N);
    printf("Masukkan ukuran tabel 2 : ");
    scanf("%d", &M);
    int T1[N];
    int T2[M];
    int count, i;

    printf("Masukkan nilai T1 : ");

    for (i=0;i<N;i++){
        scanf("%d", &T1[i]);
    }

     printf("Masukkan nilai T2 : ");

    for (i=0;i<M;i++){
        scanf("%d", &T2[i]);
    }

    if (N == M){
        count=0;
        for (i=0;i<N;i++){
            if (T1[i]==T2[i]){
            count = count + 1;
             }
            }

         if (count==N){
             printf("Simetri");
           }
         else {
            printf("Tidak simetri");
             }
    }

    else{
        printf("Tidak Simetri");
      }

}
