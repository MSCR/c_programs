#include "../commonMethods.h"

/* Bubble Sort implementation for 
 * only numbers.
*/

void bubbleSort(int, int *);
void eBubbleSort(int, int *);

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
	//bubbleSort(sizeArray, buffer);
	eBubbleSort(sizeArray, buffer);

	// Print Ordered array
	printf("Sorted list: ");
	printArray(sizeArray, buffer);

	// Free requested memory
	free(buffer);

}


void bubbleSort(int size, int *list){
/* This method implements Bubble Sort algoritm with
 * a complexity of O(n^2).
*/
	for(int iteration = 1; iteration<size; iteration++)
		for(int index = 0; index<(size-iteration); index++)
			if(*(list+index) > *(list+index+1))
				swap((list+index),(list+index+1));

	return;
}

void eBubbleSort(int size, int *list){
	int i, index;
	int change;

	// i is the index of the last element of the list
	i = size - 1;

	// The loop continues until there is no changes
	while(i > 0){
		change = 0;
		// Check sub list 0 to i
		for(index = 0; index<i; index++){
			if(*(list+index+1) < *(list+index)){
				swap((list+index), (list+index+1));
				change = index;
			}
		}
		// Update i to the last index with change
		i = change;
	}
}
