#include <stdio.h>
/**
 * main - starts the program
 *
 * Return: 0
 */
int main(void)
{
int i = 2;
long int n = 612852475143;
while (i * i < n)
{
while (n % i == 0)
{
n /= i;
}
i++;
}
printf("%ld\n", n);
return (0);
}
