#include <stdio.h>

/*
	This program calculates the elements requested to the user of
	the fibonacci sequence.

	It calculates the sequence as
		a(n) = a(n-1) + a(n-2)
	For example
		How many elements do you want og the Fibonacci sequence:
		10
	
		Fibonacci Sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
*/

long int fibonacci(void);

void main(void)
{
	int number, i;

	printf("How many elements do you want of the Fibonacci sequence::\n");
	scanf("%d", &number);
	printf("\nFibonacci sequence: 0, 1");
	for (i = 2; i < number; i++)
		printf(", %ld", fibonacci());
	printf("\n");

	return;
}

long int fibonacci(){
	static int x = 0, y = 1;
	
	y = y + x;
	x = y - x;
	
	return y;
}
