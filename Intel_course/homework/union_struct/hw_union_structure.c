#include <stdio.h>


// Variable definition area
struct data_struct{
	int a;
	int b;
}data_s;

union data_union{
	int a;
	int b;
}data_u;

int main(){
	// Code section	
	data_s.a = 100;
	data_s.b = 500;

	printf("Values a: %d, b: %d \n", data_s.a, data_s.b);

	data_u.a = 100;
	data_u.b = 500;

	printf("Values a: %d, b: %d \n", data_u.a, data_u.b);	

	return 0;
}
