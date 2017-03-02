#include <stdio.h>

/* Print Celsius-Fahrenheit table for celsius = 0, 20, ..., 300*/
/* Formula: Farh = (celsius * 9 / 5) + 32 */
/* Execise 1-4 from C laguage book */

main ()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* Lower limit of temperature talbe*/
	upper = 300;	/* Upper limit*/
	step = 20;	/* Step size*/

	celsius = lower;
	printf("***Celsius to Farhenheit table***\n");

	while(celsius <= upper){
		fahr = (celsius * (9.0 / 5.0))  + 32.0;
		printf("\t%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
