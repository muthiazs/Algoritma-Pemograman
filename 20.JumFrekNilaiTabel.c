#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Masukkan ukuran tabel T: ");
    scanf("%d", &n);

    int* T = (int*) malloc(n * sizeof(int));
    printf("Masukkan nilai-nilai elemen tabel T:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    int sum = 0; // inisialisasi variabel sum dengan 0

    for (int i = 0; i < n; i++) {
        int count = 0; // hitung kemunculan elemen i
        for (int j = 0; j < n; j++) {
            if (T[j] == T[i]) {
                count++;
            }
        }
        if (count > 1) { // jika kemunculan > 1, tambahkan ke sum
            sum += T[i];
        }
    }

    printf("Jumlah nilai elemen tabel T dengan frekuensi > 1: %d\n", sum);

    free(T);
    return 0;
}
