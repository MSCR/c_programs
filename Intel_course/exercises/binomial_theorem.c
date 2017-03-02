#include <stdio.h>
#include <math.h>

/*
  This program calculates the coheficients a,b,c from the perfect square binomial, 
	ax^2 + bx + c = 0

  using the general formula
	x = -b * sqrt(-b^2 - 4ac)
		--------------------
			 2a 
*/
int a,b,c;
float x1,x2, temp;
char img;

int main(){

	img = ' ';
	a = 0;
	b = 0;
	c = 0;
	x1 = 0;
	x2 = 0;

	printf("Resolving the perfect square binomial\n");
	printf("\nax^2 + bx + c = 0\n");
	printf("Give me a:");
	scanf("%d", &a);
	printf("Give me b:");
	scanf("%d", &b);
	printf("Give me c:");
	scanf("%d", &c);

	temp = powf(b,2) - (4*a*c);

	if (temp < 0){
		temp = (float)abs(temp);
		img = 'i';
	} 

	x1 = (-b + sqrtf(temp)) / (2 * a);
	x2 = (-b - sqrtf(temp)) / (2 * a);

	printf("X1 is %2.3f%c\n", x1, img);
	printf("X2 is %2.3f%c\n\n", x2, img);

	return 0;
}
