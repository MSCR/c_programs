#include  "hw_rotabit.h"

#define MASK 1

// Variable definition area

int display_vector(unsigned short int chain){

	char bits = sizeof(chain) * 8;
	char string[] = "0000000000000000";
	char i;

	for (i = 0; i < bits; i++){
		string[bits - i - 1] = (chain & MASK) ? '|' : 'O';
		chain = chain >> 1; 
	}

	printf("%s\n", string);
	return 0;
}

int main(){
	// Variable initialization area
	

	display_vector(3);
	

	return 0;
}
