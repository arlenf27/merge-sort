#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

void mergeSort(int a[], int n){
	int i;
	int j;
	int k;
	int mid;
	int* temp;

	/* Allocate temporary block for n elements, values will be merged onto this location */
	temp = (int*) malloc(n*sizeof(int));

	/* If length is 0 or 1, nothing to do */
	if(temp == NULL || n < 2) {return;}

	mid = n/2;

	/* Recursively sort the two halves */
	mergeSort(a, mid);
	mergeSort(a+mid, n-mid);
	
	i = 0;
	j = mid;
	k = 0;

	/* Merge the two halves by comparing values and putting into temp */
	while(i < mid && j < n){
		(a[i] < a[j]) ? (temp[k++] = a[i++]) : (temp[k++] = a[j++]);
	}

	/* Copy the remaining values left after comparing */
	while(i < mid){
		temp[k++] = a[i++];
	}
	while(j < n){
		temp[k++] = a[j++];
	}

	/* Copy the sorted values (temp) back into the original array */
	for(i = 0; i < n; i++){
		a[i] = temp[i];
	}

	/* Free memory */
	free(temp);
}

