#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

extern char **environ;
/*
 * my_env - prints the current environement
 * Return: 0 on success -1 on failure
 */

 int my_env()
 {
    char **env = environ;

    while (*env != NULL) {
        printf("%s\n", *env);
        env++;
    }

    return (0);
}

