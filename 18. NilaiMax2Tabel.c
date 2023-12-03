#include <stdio.h>

int main(){
   int n,i,max1,max2;


   printf("Masukkan nilai N :  ");
   scanf("%d", &n);

   int T[n];
   printf("Masukkan nilai T : " );
   for (i=0; i<n; i++){
        scanf("%d", &T[i]);
   }
   max1=0;
   max2=0;
   for (i=0; i<n ; i++){
      if (T[i]>max1){
        max2=max1;
        max1=T[i];
      }
      if (T[i]>max2 && T[i]<max2){
        max2=T[i];
      }
   }
      printf("Hasilnya adalah %d", max2);

}
