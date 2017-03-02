#include <stdio.h>

// Variable definition area

void f_stringCpy(char *ptr_src, char *ptr_dst){
	while(*ptr_dst++ = *ptr_src);
}

int main(){
	// Variable initialization area
	char *sp_newString=(char *)malloc(50)

	// Code section	
	f_stringCpy("Bonne voyage", sp_newString);
	printf("Original String: %s\nNew String:%s\n");

	return 0;
}
