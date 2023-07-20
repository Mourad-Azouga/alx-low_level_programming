/* putchar.c */

#include <unistd.h>

/* Function prototype */
int _putchar(char c)
{
    return write(1, &c, 1);
}
