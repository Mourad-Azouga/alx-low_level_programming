#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

extern char **environ;
/*
 * main - Main program
 * @ac: number of args
 * @av: arg holder
 * @env: environment
 */

int main() {
    char **env = environ;

    while (*env != NULL) {
        printf("%s\n", *env);
        env++;
    }

    return 0;
}

