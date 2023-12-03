/***************************************************************/
/* Nama : Muthia Zhafira Sahnah                                */
/* NIM : 24060122130071                                        */
/* Nama File : atm.c                                           */
/* TUGAS BESAR ALPRO                                           */
/*                                                             */
/***************************************************************/
#ifndef ATM_C
#define ATM_C

#include <stdio.h>
#include "atm.h"

int saldo = 5000000;

void menuJenisTrx(){
printf("_____________________________________");
printf("\n      Selamat Datang              \n");
printf("\n    MESIN ATM BANK SODIKUN        \n");
printf("\n==================================\n");
printf("\n<1> Cek Saldo   \n");
printf("\n<2> Tarik Tunai \n");
printf("\n<3> Setor Tunai \n");
printf("\n<4> Keluar      \n");
printf("______________________________________");

}

void cekSaldo(){
    printf("\nSaldo Anda sekarang adalah sebesar Rp. %d\n", saldo );

}

int tarikTunai(){
    int jumlahTarik;
    printf("Masukkan nominal : ");
    scanf("%d", &jumlahTarik);
    if (jumlahTarik<=(saldo-50000)){
       saldo = saldo- jumlahTarik;
       printf("\nJumlah uang yang ditarik sebesar Rp %d", jumlahTarik);
       cekSaldo();
       }
   else {
    printf("\nMaaf saldo Anda tidak mencukupi");
   }

}
int setorTunai(){
    int jumlahSetor;
    printf("Masukkan nominal : ");
    scanf("%d", &jumlahSetor);
    saldo = saldo + jumlahSetor;
    cekSaldo();
}

int keluar(){
    printf("\nTerimakasih telah menggunakan mesin ATM Bank Sodikun\n");
}



#endif // ATM_C
