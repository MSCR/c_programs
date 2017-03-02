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

long int fibonacci(int n);

void main(void)
{
	int number;

	printf("What number of the Fibonacci sequence do you want to know:\n");
	scanf("%d", &number);
	printf("\nFibonacci element %d is %ld\n", number, fibonacci(number));

	return;
}

long int fibonacci(int n){
	long fibinf, fibsup;

	if (n <= 1)
		return n;

	fibinf = 0;
	fibsup = 1;

	for(int i = 2; i <= n; i++){
		long x;
		x = fibinf;
		fibinf = fibsup;
		fibsup = x + fibinf;
	}

	return fibsup;
}
