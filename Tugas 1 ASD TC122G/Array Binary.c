#include <stdio.h>
#include <stdlib.h>

int iterativeBinarySearch (int array[], int start_index, int end_index, int element) {
    while (start_index<=end_index) {
        int middle=start_index+(end_index-start_index)/2;
        if (array[middle]==element)
        	return middle;
        if (array[middle]<element)
    		start_index=middle+1;
        else
            end_index=middle-1;
    }
    return -1;
}

int main (void) {
    int array[] = {3, 6, 8, 9, 20, 21, 23};
    int n = 9;
    int element = 21;
    int found_index = iterativeBinarySearch (array, 0, n-1, element);
    if (found_index == -1) {
        printf("Angkanya NDAK KETEMU BLAS!");
    } else {
        printf("Angkanya KETEMU LO! diindex %d", found_index);
    }

    return 0;
}
