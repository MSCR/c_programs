#include <stdio.h>

/* print Fahrenheit-Celsius  table for fahr = 0, 20, ..., 300*/
/* Exercise 1-3 from C language book */
main ()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* Lower limit of temperature talbe*/
	upper = 300;	/* Upper limit*/
	step = 20;	/* Step size*/

	fahr = lower;
	printf("***Farhenheit to Celsius table***\n");

	while(fahr <= upper){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("\t%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
