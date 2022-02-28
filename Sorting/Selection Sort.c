#include <stdio.h>

int selectionSort (int arr[], int n) {
    int i, j, posisi, swap;
    for (i=0; i<(n-1); i++) {
    posisi = i;
    for (j=i+1; j<n; j++) {
        if (arr[posisi]>arr[j]) {
            posisi = j;
        }
    }
    if (posisi != i) {
      swap = arr[i];
      arr[i] = arr[posisi];
      arr[posisi] = swap;
    }
    }
}

int main() {
    int array[100], data=1, i, j, n = sizeof(array)/sizeof(array[0]);
    printf ("Masukkin banyaknya data : ");
    scanf ("%d", &n);
    printf ("\n");
    for (i=0; i<n; i++){
        printf ("Data %d = ", data++);
        scanf ("%d", &array[i]);
    }

selectionSort (array, n);
    printf ("\n"); printf ("Pengurutan dengan Selection Sort : \n\n");
    for (i=0; i<n; i++){
        printf ("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
