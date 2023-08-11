#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
//#include <sys/wait.h>//this will return an error in vscode as it isnt a linux environment and doesnt have the header

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t child_pid;
    int status;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child_pid == 0)
    {
        printf("Wait for me, wait for me\n");
        sleep(3);
    }
    else
    {
        wait(&status);
        printf("Oh, it's all better now\n");
    }
    return (0);
    char*  argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

    printf("Before execve\n");
    if (execve(argv[0], argv, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    wait();
    return (0);
}
