#include<stdio.h>

void insertionSort (int *array, int n){
    int temp, j;
    for (int i=1; i<=n-1; i++){
        temp = array[i];
        j = i-1;

        while(j>=0 && array[j] > temp){
            array[j+1] = array[j];
            j--;
        } array[j+1] = temp;
    }
}

void print (int* array, int n){
    for (int i=0; i<n; i++){
        printf ("%d ", array[i]);
    } printf ("\n");
}

int main() {
    int array[100], data=1, i, j, n = sizeof(array)/sizeof(array[0]);
    printf ("Masukin banyaknya data : ");
    scanf ("%d", &n);
    printf ("\n");
    for (i=0; i<n; i++){
        printf ("Data %d = ", data++);
        scanf ("%d", &array[i]);
    }

insertionSort (array, n);
    printf ("\n"); printf ("Pengurutan dengan Insertion Sort : \n\n");
    for (i=0; i<n; i++){
        printf ("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
