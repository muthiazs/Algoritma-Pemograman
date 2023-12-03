/***************************************************************/
/* Nama : Muthia Zhafira Sahnah                                */
/* Nama File : atm.h                                           */
/* TUGAS BESAR ALPRO                                           */
/*                                                             */
/***************************************************************/

#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED
#define PIN 9999



void menuJenisTrx();
/* Proses : Menampilkan tampilan menu yang berisi pilihan transaksi dan meminta
input pilihan transaksi 1 , 2 , 3 atau 4 */
void cekSaldo();
/*proses : Menampilkan saldo di atm */
int tarikTunai();
/*proses: mengurangi saldo dengan nominal jumlah tarik tunai*/
int setorTunai();
/*proses: menambah saldo dengan nominal jumlah setor tunai*/
int keluar();
/*proses: mengucapkan terimakasih ke user*/




#endif // ATM_H_INCLUDED
