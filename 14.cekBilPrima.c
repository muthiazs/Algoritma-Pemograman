#include<stdio.h>

int main()
{
    int N,i, j=0;

    printf("Masukkan nilai N : ");
    scanf("%d", &N);

  if (N>0){
    for (i=1;i<=N;i++){
        if (N%i==0){
            j++;
        }
    }
  if(j==2){
    printf("Bilangan prima");
  }
  else {
    printf("Bukan bilangan prima");
  }

  }
}
