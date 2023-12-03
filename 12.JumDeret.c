#include <stdio.h>

int main()
{
    int N, i, total = 0;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
    {
        total += i;
    }
    printf("Jumlah total deret bilangan adalah: %d", total);

}
