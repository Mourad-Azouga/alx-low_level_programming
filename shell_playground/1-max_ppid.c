#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t pid_max;
	pid_t my_pid;
	pid_t my_ppid;
	FILE *file;

	file = fopen("/proc/sys/kernel/pid_max", "r");
	fscanf(file, "%d", &pid_max);
   	fclose(file); 

		my_pid = getpid();
    my_ppid = getppid();
    printf("%u\n", my_pid);
    printf("%u\n", my_ppid);
printf("%u\n", pid_max);
    return (0);
}
