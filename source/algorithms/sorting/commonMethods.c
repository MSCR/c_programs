#include "commonMethods.h"
#include <string.h>

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


void swap(int *e1, int *e2){
/* This method implements a swapping between two addresses. */ 
	int temp;

	temp = *e1;
	*e1 = *e2;
	*e2 = temp;

	return;
}

