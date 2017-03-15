#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Bubble Sort implementation for 
 * only numbers.
*/

void bubbleSort(int, int *);
void eBubbleSort(int, int *);
void swap(int *, int *);
void copyArray(int, char *,int *);
void printArray(int, int *);

void main(int argc, char *argv[]){

	int sizeArray = argc -1;

	// Create temporary bufer
	int *buffer = (int *) malloc(sizeof(int) * sizeArray);
	
	// Get array from parameters
	copyArray(sizeArray, *(argv+1), buffer);

	// Print Unsortered array
	printArray(sizeArray, buffer);

	// Sort Unsortered array
	//bubbleSort(sizeArray, buffer);
	eBubbleSort(sizeArray, buffer);

	// Print Ordered array
	printArray(sizeArray, buffer);

	// Free requested memory
	free(buffer);

}

void copyArray(int size, char *src, int *dst){
/* This method converts the parameters from
 * src, which are char into int and save them
 * in dst.
*/
	for(int index = 0; index < size; index++){
		*(dst+index) = atoi(src+(index*2));  
		//dst[i] = scr[i];	// Another possible solution.
	}
	return;
}

void printArray(int size, int *list){
/* This method prints the array list of size size. */
	for (int index = 0; index<size; index++ ){
		printf("%d%c", *(list+index), (index<size-1)? ' ': '\n');
	}
	return;
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

void swap(int *e1, int *e2){
/* This method implements a swapping between two addresses. */ 
	int temp;

	temp = *e1;
	*e1 = *e2;
	*e2 = temp;

	return;
}
