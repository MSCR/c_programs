#include "hw_calc.h"

float Addition(int op1, int op2){
	return (op1 + op2);
}

float Subtraction(int op1, int op2){
	return (op1 - op2);
}

float Multiplication(int op1, int op2){
	return (op1 * op2);
}

float Division(int op1, int op2){
	return (op1 / op2);
}

float Power(int op1, int op2){
	return pow(op1, op2);
}

float Modulation(int op1, int op2){
	return (op1 % op2);
}

float ANDl(int op1, int op2){
	return (op1 & op2);
}

float ORl(int op1, int op2){
	return (op1 | op2);
}

float XORl(int op1, int op2){
	return (op1 ^ op2);
}

int print_opt(){
	int opt, i, len;

        printf("\nProgrammer Calculator\n");
        printf("Select the operation you want to run:\n");
        len = sizeof(op_str)/sizeof(char *); 
        for (i = 0; i < len; i++){
                printf("\t%d\t%s\n", i, op_str[s[i]]);
        }
        printf("\nYour option:");
        scanf("%d", &opt);

	return opt;
}

int get_operands(int opt, int *op1, int *op2){
	printf("Which is the first operand:");
	scanf("%d", op1);

	printf("Which is the second operand:");
	scanf("%d", op2);

	return 0;
}

int main(){

	float result;
	int opt, op1, op2;
	float (*options[])(int, int) = { Addition, Subtraction, Multiplication, Division, Modulation, Power, ANDl, ORl, XORl};

	// Variable initialization section
	result = 0;

	// Code section
	while(opt != EXIT){
		opt = print_opt();
		if (opt != EXIT){
			get_operands(opt, &op1, &op2);
			// TODO: Still need to check when passing values not inside the array
			result = options[opt](op1, op2);
			printf("Your result is: %4.3f\n\n", result);
		}
	}

	printf("See you later, buddy\n\n");

	return 0;
}
