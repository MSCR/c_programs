#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	/* fork a child process */
	pid_t pid;
	pid = fork();

	printf("Hi\n");
	if(pid < 0) { /* error ocurred */
		fprintf(stderr, "Fork failed");
		return 1;
	} else if (pid == 0) { /* child process */
		execlp("/bin/ls", "ls", NULL);
	} else {	/* parent process */
		/* parent will wait for the child to comple */
		wait(NULL);
		printf("Child Complete\n");
	}

	return 0;
}
