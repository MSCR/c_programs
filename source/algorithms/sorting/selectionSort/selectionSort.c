#include "../commonMethods.h"

/* Selection Sort implementation for 
 * only numbers.
*/

void selectionSort(int, int *);
int *getMinValue(int *, int *);

void main(int argc, char *argv[]){

	int sizeArray = argc -1;

	// Create temporary bufer
	int *buffer = (int *) malloc(sizeof(int) * sizeArray);
	
	// Get array from parameters
	copyArray(sizeArray, *(argv+1), buffer);

	// Print Unsortered array
	printf("Original list: ");
	printArray(sizeArray, buffer);

	// Sort Unsortered array
	selectionSort(sizeArray, buffer);

	// Print Ordered array
	printf("Sorted list: ");
	printArray(sizeArray, buffer);

	// Free requested memory
	free(buffer);

}


void selectionSort(int size, int *list){
/* This method implements Bubble Sort algoritm with
 * a complexity of O(n^2).
*/

	for(int i = 0; i<size; i++){
		int *minValueIndex = getMinValue(list+i, list+size-1);
		swap(list+i, minValueIndex);
	}

}

int *getMinValue(int *lowIndex, int *highIndex){
	int *index = lowIndex;

	for(int i = 0; (lowIndex+i)<=highIndex; i++){
		int *pivot = lowIndex+i;
		if(*pivot < *index){
			index = pivot;
		}
	}

	return index;
}
