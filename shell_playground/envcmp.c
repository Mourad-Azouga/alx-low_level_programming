#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main program
 * @ac: arg number
 * @av: arg holder
 * @env: env
 * Return: 0
*/

extern char **environ;

int main(int ac, char **av, char **env)
{
unsigned int i = 0;
while (env[i] != NULL)
	{
	printf("%s\n", env[i]);
	i++;
	}
printf("-----------------------------------------------------------------------------------\n");
char **en = malloc(sizeof(environ));
en = environ;

while (*en != NULL)
{
	printf("%s\n", *en);
	en++;
}
free(en);
return (0);
}
