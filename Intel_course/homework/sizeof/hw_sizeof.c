#include <stdio.h>

int main(){

	char vchar;
	short vshort;
	int vint;
	long vlong;
	float vfloat;
	double vdouble;

	printf("\nChecking size of different variables\n");
	printf("Size of a char variable: %d byte(s)\n", sizeof(vchar));
	printf("Size of a int variable: %d byte(s)\n", sizeof(vint));
	printf("SIze of a float variable: %d byte(s)\n", sizeof(vfloat));
	printf("Size of a long variable: %d byte(s)\n", sizeof(vlong));
	printf("Size of a short variable: %d byte(s)\n", sizeof(vshort));
	printf("Size of a double variable: %d byte(s)\n", sizeof(vdouble));

	return 0;
}
