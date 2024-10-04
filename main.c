#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sorting.h"

int main(int argc, char* argv[]){
	int n;
	int* a;
	int i;
	time_t timeStart;
	time_t timeEnd;
	
	/* argv[1] is the SIZE of the array! strtol is a stdlib function 
	 * for converting from string to an integer, ends with a 
	 * null character and is in base 10 */
	n = (argc == 1) ? (1000) : ((int) strtol(argv[1], '\0', 10));

	/* Creation of array to be sorted */
	a = (int*) malloc(n * sizeof(int));
	
	/* Fill array with pseudorandom numbers BETWEEN 1 AND 10000! 
	 * Seed is based on current time */
	srand(time(NULL));
	for(i = 0; i < n; i++){
		a[i] = rand() % 10000 + 1;
	}
	
	printf("Array before merge sort:\n");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}

	/* Uses time() function to get difference in times, will only 
	 * calculate time in SECONDS! */
        timeStart = time(NULL);

	mergeSort(a, n);

        timeEnd = time(NULL);

	printf("\n\n\nArray after merge sort:\n");
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n\nTime taken to sort array: %ld seconds\n\n", timeEnd - timeStart);
	
	free(a);

	return 0;
}
