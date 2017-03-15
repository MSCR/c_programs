#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_LINE 80

int readCommand(char **args);
int execCommand();

int main(void)
{
	size_t  buff_size = 10;
	char *args[MAX_LINE/2 +1];	/* command line arguments */
	char *b;
	int should_run = 1;		/* flag to determine when to exit program */
	int background = 0;		/* flag to send child process to background*/

	while(should_run){
		int i = 0, j = 0, size = 0;
		char buffer[10];
		b = buffer;

		printf("osh>");
		fflush(stdout);

		/**
		 * After reading user input, the steps are:
		 * (1) fork a child process using fork()
		 * (2) the child process will invoke execvp()
		 * (3) if command included &, parent will invoke wait()
		*/


		//execvp(args[0], args);
		
		printf("%s\n", args[0]);
		printf("%s\n", args[1]);
		should_run = 0;
		
	}

	return 0;

}

int readCommand()
{
	int flags = 0;
	char buffer[];

	c = getchar();
	switch(c){
		case '&':
		break;
		default:
		break;
	}

	return flags;
}
