#include "strlen.c"
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all args
 * @ac: Number of args
 * @av: Array that holds the args.
 *
 * Return: Pointer to the concatenated string or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
char *concat;
int memloc = 0, j, Tlen = 0;
unsigned int *len, i;
if (ac == 0 || av == NULL)
return (NULL);
len = malloc(ac * sizeof(unsigned int));
if (len == NULL)
return (NULL);
for (memloc = 0; memloc < ac; memloc++)
{
len[memloc] = _strlen(av[memloc]);
Tlen += len[memloc];
}
concat = malloc((Tlen + 1) * sizeof(char));
if (concat == NULL)
{
free(len);
return (NULL);
}
memloc = 0;
for (j = 0; j < ac; j++)
{
for (i = 0; i < len[j]; i++, memloc++)
{
concat[memloc] = av[j][i];
}
concat[memloc++] = '\n';
}
concat[memloc] = '\0';
free(len);
return (concat);
}
