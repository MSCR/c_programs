#include <stdio.h>

/* count characters in inputl 1st version */
main(){
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("\n%ld\n",nc);

}
