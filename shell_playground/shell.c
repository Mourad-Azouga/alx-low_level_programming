#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/*
 * main - main program
 * Return: 0 success -1 failure
*/

int main(void) 
{

size_t n = 0; /* Initialize n to 0*/
char *buffer = NULL; /* Initialize buffer to NULL*/
char* exe[2];
pid_t child;
start: 
    /* Reads the line*/
printf("$ ");
getline(&buffer, &n, stdin);
buffer[strlen(buffer) - 1] = '\0';
/* Allocate memory for the executable path*/
exe[0] = (char *)malloc(strlen(buffer) + 1);
strcpy(exe[0], buffer);
exe[1] = NULL;

/* Starts the child process*/
child = fork();
	if (child == -1)
	{
	perror("error");
	return (0);
	}
	else if (child == 0)
	{

			if (execve(exe[0], exe, NULL) == -1)
			{
				perror("Error:");
			}
	
	/* Free allocated memory*/
	free(exe[0]);
	free(buffer);
	exit(EXIT_SUCCESS);
	}
/* Back to the parent process*/
wait(NULL);
	goto start;
	return (0);
}
