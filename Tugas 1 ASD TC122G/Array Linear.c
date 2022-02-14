#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, Data[10], jumlah=0, cari;

    printf ("Mau masukin berapa data bray? ");
    scanf ("%d", &n);
    printf ("Masukin %d integer(s) \n", n);
    for (i=0; i<n; i++) {
    	scanf("%d", &Data[i]);
	}
    printf ("Mau cari angka berapa bray? ");
    scanf ("%d", &cari);
    for (i=0; i<n; i++) {
        if (Data[i]==cari) {
        	printf ("Angka %d DITEMUKAN dan tersimpan di indeks %d! bray\n", cari, i+1);
            jumlah++;
        }
    }
        if (jumlah==0) {
        	printf ("Angka %d ndak ketemu ik!", cari);
		} else {
			printf("Angka %d ketemu sebanyak %d kali bray, dalam array!", cari, jumlah);
		}

    return 0;
}
