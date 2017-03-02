#include <stdio.h>

// Variable definition area
unsigned int data;
char *low, *high, a, b;

int main(){
	// Variable initialization area
	data = 500;
	printf("\nYour value is: %d\n", data);

	// Code section	
	low = (char *) &data;
	a = *low;
	high = low + 1;
	b = *high;
	
	//
	*low = b;
	*high = a;

	printf("\nYour value is after op: %d\n", data);

	return 0;
}
