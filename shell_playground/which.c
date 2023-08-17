#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
char getpath(void);
/**
 * getpath - Get's the current path
 * Return: the current path
*/
char getpath(void)
{
pid_t child;
char* find[2];
int fd;
FILE *output;
output_file[] = "pwd.txt";

child = fork();
if (child == 0)
{
perror("error");
return (0; 
}
else if (child == -1)
{

/*Create file to store pwd path*/
fd = open(output_file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

/*If smtn went wrong*/
if (fd == -1)
{
perror("Error");
exit(EXIT_FAILURE);
} 

/*redirect the output*/
dup2(fd, STDOUT_FILENO);

/*find pwd path*/
find[0] = "/bin/pwd";
find[1] = NULL;
if (execve(find[0], find, NULL) == -1)
{
perror("Error");
exit(EXIT_FAILURE);
}
close(fd);
}
}


/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    unsigned int i;
    struct stat st;

 if (ac < 2)
    {
        printf("Usage: %s path_to_file ...\n", av[0]);
        return (1);
    }
    i = 1;
    while (av[i])
    {
        printf("%s:", av[i]);
        if (stat(av[i], &st) == 0)
        {
            printf(" FOUND\n");
        }
        else
        {
            printf(" NOT FOUND\n");
        }
        i++;
    }
    return (0);
}
