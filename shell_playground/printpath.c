#include "head.h"
/*
 * main - main program
 * @argc: arg number
 * @argv: arg holder
 * @env: environ
 * Return: 0 on success and -1 on failure
*/

int main(int argc, char *argv, char *env[])
{
    int len = strlen(getenv("PATH"));
    char *en[len] = getenv("PATH"), *toktok = NULL;
    
    // Divides the line into words
    toktok = strtok(en, "/");

    // Prints the line
    while (toktok != NULL) {
        printf("%s", toktok);
        toktok = strtok(NULL, " ");
    if (toktok != NULL)
        printf("\n");
    }



return (0);
}