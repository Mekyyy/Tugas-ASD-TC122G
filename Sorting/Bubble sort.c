#include <stdio.h>

void bubbleSort (int arr[], int n){
	int i, j, tmp;
	for (i=0; i<n; i++)
	for (i=1; i<=(n-1); i++) {
    	for (j=n; j>=(i+1); j--) {
            if (arr[j-1]>arr[j]) {
            	tmp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main() {
	int array[100], n, i, j;
	printf ("Masukin banyaknya data bray: ");
	scanf ("%d", &n);
	printf ("\n");
	for (i=1; i<=n; i++) {
    	printf ("Data %d = ", i);
    	scanf ("%d", &array[i]);
    }

	bubbleSort (array, n);
	printf ("\n"); printf ("Pengurutannya dengan Bubble Sort : \n\n");
	for (i=1; i<=n; i++) {
    	printf ("%d ", array[i]);
    }
	printf ("\n");
	return 0;
}
