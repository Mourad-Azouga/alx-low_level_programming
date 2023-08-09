       #define _GNU_SOURCE
       #include <stdio.h>
       #include <stdlib.h>
       #include <string.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
char *strtok(char *str, const char *delim);

    void main(int argc, char *argv[])
       {
        size_t n;
        char *buffer, *toktok = NULL;
    // Reads the line 
           printf("$ ");
           getline(&buffer, &n, stdin);
    // Devides the line into words
           toktok = strtok(buffer, " ");
    // Prints the line
           while (toktok != NULL)
           {
           printf("%s\n", toktok);
           toktok = strtok(NULL, " ");
           }          
          
           exit(EXIT_SUCCESS);
       }