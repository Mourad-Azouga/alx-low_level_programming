#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void) {
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(1, message, sizeof(message) - 1);
    return 1;
}
