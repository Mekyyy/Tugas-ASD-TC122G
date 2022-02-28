#include <stdio.h>

int angka [8] = {6, 7, 2, 0, 2, 1, 0, 78};

int main() {
    printf ("TUGAS UNTUK NIM ANGKA TERAKHIR GENAP (672021078) \n");
    printf ("Integer = 6, 7, 2, 0, 2, 1, 0, 78 \n\n");
    for (int a=0; a<8; a++) {
    	int indexNilaiMinimal=a;
		for (int b=a; b<8; b++) {
			if (angka[b]<angka[indexNilaiMinimal]) {
			    indexNilaiMinimal=b;
			}
		}
		int temp = angka[a];
		angka[a] = angka[indexNilaiMinimal];
		angka[indexNilaiMinimal] = temp;
	}
	printf ("Pengurutan dengan Selection Sort : \n");
	for (int a=0; a<8; a++) {
		printf ("%d ", angka[a]);
	}

	for (int x=1; x<8; x++) {
		for (int y=x; y>0 && angka[y]<angka[y-1]; y--) {
			int temp = angka[y-1];
			angka[y-1] = angka[y];
			angka[y] = temp;
		}
	}
	printf ("\n\n"); printf ("Pengurutan dengan Insertion Sort : \n");
	for (int x=0; x<8; x++) {
		printf ("%d ", angka[x]);
	}

	getchar();
}
