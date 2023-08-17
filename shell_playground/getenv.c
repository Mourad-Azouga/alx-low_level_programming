#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_getenv(const char *name);
extern char **environ;

/**
 * _getenv - Gets the env
 * @name: the name to be searched.
 * Return: ptr to the env
*/

char *_getenv(const char *name)
{
int i = 0;
int len = strlen(name);
char *pval = NULL;



for (i = 0; environ[i] != NULL; i++)
{
if (strncmp(environ[i], name, len) == 0)
	{
	pval = environ[i] + len;
	break;
	}
}
return (pval);
}

/**
 * main - main program
 * @argc: arg number
 * @argv: arg holder
 * @env: env
 * Return: 0 Success -1 Failure
*/

int main(int argc, char **argv, char **env)
{
	char *en;
if (argc != 2)
return (-1);
else
en = _getenv(argv[1]);

if (en != NULL)
{
printf("%s\n", en);
return (0);
}
else
return (-1);

}
