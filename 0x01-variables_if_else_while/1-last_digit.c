#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Description: This script checks if the last digit of n
 *              is greate than 5 or equals 0 or is less
 *              than 6 and not 0 and prints the the result
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int Lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
Lastdigit = n % 10;
if (Lastdigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, Lastdigit);
else
if (Lastdigit == 0)
printf("Last digit of %d is %d and is 0\n", n, Lastdigit);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastdigit);
return (0);
}
