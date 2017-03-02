#include <stdio.h>
#include <stdlib.h>

/* 
This space will be used to experiment curiosities about the C language
*/

void main (int argc, char *argv[]){
	
	char a = -128, a_m = 127;
	unsigned a_u = 0, a_um = 255;
	int b = -32768, b_m = 32767;
	short c = 10;
	long d = 445;
	float f = 3.1416;
	double g = 52.44;

	// Check size of variables
	printf("Sizeof:\nchar:%lu\nshort:%lu\nint:%lu\nlong:%lu\nfloat:%lu\ndouble:%lud\n", 
		sizeof(char), sizeof(short), sizeof(int), sizeof(long),
		sizeof(float), sizeof(double));

	// Check range of variables, unsigned or signed
	printf("char range:%d / %d\n\
		unsigned char range:%u / %u\n\
		short range:%d / %d\n",
		a, a_m,
		a_u, a_um,
		b, b_m);	

	return;

}
