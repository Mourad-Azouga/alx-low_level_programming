#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>//this will return an error in vscode as it isnt a linux environment and doesnt have the header

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t child[5];
	int i;
	char*  argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
    
		for(i = 0; i < 5; i++) // loop will run n times (n=5)
		{
			child[i] = fork();
			if (child[i] == -1)
			{
				perror("fork");
				return (0);
			}
			else if (child[i] == 0)
			{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
			sleep(3);
			}
    		}
		sleep(2);
	for(i = 0; i < 5; i++)
	{
		int status;
		pid_t terminated_child = waitpid(child[i], &status, 0);
	if (terminated_child == -1)
	{
		perror("waitpid");
		return (0);
	}
	if (WIFEXITED(status))
	{
		printf("Child with PID %d terminated with exit status: %d\n", terminated_child, WEXITSTATUS(status));
		
	}
	else
	{
		printf("Child with PID %d terminated abnormally\n", terminated_child);
	}
	sleep(1);
	}
		return (0);
}
