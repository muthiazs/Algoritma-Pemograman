#include<stdio.h>

int main(){
   int i,j, count;
   int n;


   printf("Masukkan nilai n : ");
   scanf("%d", &n );

   int T[n];

   printf("Masukkan nilai T : ");

   for (i=0;i<n;i++){
      scanf("%d", &T[i]);
   }
      for(i=0;i<n;i++){
          count=1;
          for (j=i+1;j<n;j++){
            if (T[i]!=0 && T[i]==T[j]){
              count = count+1;
              T[j] =0;
         }
      }

      if (count >1 ){
         printf(" %d" , T[i]);
      }

   }

}
