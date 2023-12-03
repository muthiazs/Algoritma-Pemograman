/***************************************************************/
/* Nama : Muthia Zhafira Sahnah                                */
/* NIM : 24060122130071                                        */
/* Nama File : driveratm.c                                     */
/* TUGAS BESAR ALPRO                                           */
/*                                                             */
/***************************************************************/
#include <stdio.h>
#include "atm.h"

int main(){
    int pin, pilihan, jumlahTarik, jumlahSetor, i = 0;
    char konfirmasi = 'Y'; // inisialisasi konfirmasi dengan 'Y'

    do{
        while(i < 3){
            printf("Masukkan PIN Anda : ");
            scanf("%d",&pin);

            if (pin == PIN){
                menuJenisTrx();
                printf("\nMasukkan pilihan transaksi (1/2/3/4) : ");
                scanf("%d", &pilihan);

                switch(pilihan){
                    case 1:
                        cekSaldo();
                        break;
                    case 2:
                        tarikTunai();
                        break;
                    case 3:
                        setorTunai();
                        break;
                    case 4:
                        keluar();
                        return 0;
                    default:
                        printf("Pilihan anda tidak valid. Pilihan valid adalah [1|2|3|4]. Silahkan coba lagi.\n");
                        break;
                }

                printf("\nApakah anda ingin melakukan transaksi lagi? [Y|N]: ");
                scanf(" %c", &konfirmasi);

                if (konfirmasi == 'N' || konfirmasi == 'n'){
                    printf("\nTerimakasih telah menggunakan mesin ATM Bank Sodikun\n");
                    return 0;
                }

                break;
            }
            else{
                printf("PIN yang anda masukkan salah.\n");
                i++;
                if (i == 3){
                    printf("\nATM di blokir silahkan hubungi Bank Sodikum");
                    return 0;
                }
            }
        }
    } while (konfirmasi == 'Y' || konfirmasi == 'y');

    return 0;
}
