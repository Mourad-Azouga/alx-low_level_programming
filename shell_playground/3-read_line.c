#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main(int argc, char *argv[]) {
    int d = 1;
    size_t n = 0; // Initialize n to 0
    char *buffer = NULL; // Initialize buffer to NULL
    char *toktok = NULL;

    // Reads the line
    printf("$ ");
    getline(&buffer, &n, stdin);

    // Divides the line into words
    toktok = strtok(buffer, " ");

    // Prints the line
    while (toktok != NULL) {
        printf("%s", toktok);
        toktok = strtok(NULL, " ");
    if (toktok != NULL)
        printf("\n");
    }

    // Added code so it doesn't instantly shut down in exe
    if (d == 1)
    {
        printf("Input anything to exit\n");
        scanf("%d", &d);
    } else 
    {
        exit(EXIT_SUCCESS);
    }

    // Free allocated memory
    free(buffer);
     
    return (0);
}
