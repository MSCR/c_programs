#include "memalloc.h"

#define MEMORY_REQUEST 1024

// Variable definition area

int main(){
	// Variable initialization area
	int size = 0;
	char *ptr;

	// Code section	
	do{
		ptr = (char *)malloc (MEMORY_REQUEST);
		size++;
		printf("%d\n",size);
	}while(ptr);

	free(ptr);

	printf("Your HEAP is %d", size);
	return 0;
}
