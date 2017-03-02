#include "hw_addrs.h"

// Variable definition area
int sum(int a, int b);

int var_noinit;
int var_init = 100;

int main(){
	// Variable initialization area
	int result;
	int *ptr;
	int (*ptr_fun)(int, int);

	ptr_fun = sum;
	ptr = &result;
	result = ptr_fun(5, 13);

	// Code section	
	printf("El resultado es %d\n", *ptr);
	printf("La direccion de resultado es 0x%X\n", ptr);
	printf("La direccion de la funcion es 0x%X\n", ptr_fun);
	printf("La direccion de var global init es 0x%X\n", &var_init);
	printf("La direccion de var global no init es 0x%X\n", &var_noinit);

	return 0;
}

int sum(int a, int b){
	return(a+b);
}
