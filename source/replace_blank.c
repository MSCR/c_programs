#include <stdio.h>

/* count lines in input */
int main(){

	int c, index;
	char str[30];

	index = 0;

	str[index++] = getchar();
	while((c = getchar()) != EOF){
		if ((c != str[index-1]) || (c != ' '))
			str[index++] = (char) c;
	}

	printf("Your string is:\n%s\n", str);

	return 0;
}
