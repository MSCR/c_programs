#include <stdio.h>

/*
	This program calculates the factorial number requested by the user.

	This is calculates using the next formula:
		n! = n*(n-1)!
	It uses an iteration to calculate the factorial result
	For example:
		Give me the factorial number of :
		5
		Factorial number of 5 is 120
*/

int factorial(int n);

void main(void)
{
	int number;
	long int res;

	printf("Give me the factorial number of:\n");
	scanf("%d", &number);
	res = factorial(number);
	printf("Factorial number of %d is %ld\n", number, res);
	return;
}

int factorial(int n){
	int factorial, counter;

	factorial = 1;
	for (counter = n;counter >= 1; counter--)
		factorial *= counter;

	return factorial;
}
