#include<stdio.h>

int main(){
   int N, i, j, faktor;

   printf("Masukkan nilai N : ");
   scanf( "%d", &N);

   if (N<=0){
    printf("Masukan harus positif");
   }
   else{
      printf("Bilangan prima adalah");
      for (i=1;i<=N;i++){
        faktor = 0;
          for (j=1;j<=i;j++){
            if (i%j==0){
             faktor = faktor +1;
          }
          }
          if (faktor==2){
            printf("%d ", i);
          }
      }

   }
}
