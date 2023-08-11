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
    int i;
     char*  argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
    
    for(i=0;i<5;i++) // loop will run n times (n=5)
    {
        if(fork() == 0)
        {
            
            
    if (execve(argv[0], argv, NULL) == -1)
    {
        perror("Error:");
    }    // To know which child is on
            printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid());
    printf("After execve\n");
    
    }    
    for(int i=0;i<5;i++) // loop will run n times (n=5)
    wait(NULL);
    

>>>>>>> cfd574d61603382c0d683189b8ed354bdc5bedc2
    return (0);
}

