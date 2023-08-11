#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main(void) 
{
    //int d = 1;
    size_t n = 0; // Initialize n to 0
    char *buffer = NULL; // Initialize buffer to NULL
    //char *toktok = NULL;
    char* exe[2];

   
    // Reads the line
    printf("$ ");
    getline(&buffer, &n, stdin);
    buffer[strlen(buffer) - 1] = '\0'; // Remove the newline character

    // Allocate memory for the executable path
    exe[0] = (char *)malloc(strlen(buffer) + 1);
    strcpy(exe[0], buffer);
    exe[1] = NULL;


    if (execve(exe[0], exe, NULL) == -1)
			{
				perror("Error:");
			}


    // Free allocated memory
    free(exe[0]);
    free(buffer);
     
    return (0);
}
