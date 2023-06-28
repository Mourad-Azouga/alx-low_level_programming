#include <stdio.h>

/**
 * is_prime - Check if a number is prime
 * @num: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(unsigned long num)
{
    unsigned long i;

    if (num < 2)
        return 0;

    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @num: The number to find the largest prime factor of
 *
 * Return: The largest prime factor
 */
unsigned long largest_prime_factor(unsigned long num)
{
    unsigned long i;

    for (i = 2; i <= num; i++)
    {
        if (num % i == 0 && is_prime(num / i))
            return num / i;
    }

    return 0;
}

int main(void)
{
    unsigned long number = 612852475143;
    unsigned long largest_factor;

    largest_factor = largest_prime_factor(number);

    printf("The largest prime factor of %lu is %lu\n", number, largest_factor);

    return 0;
}

