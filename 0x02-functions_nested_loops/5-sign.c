#include "main.h"
/**
 * print_sign - check the sign of a number then print it.
 * @n: The int to be checked.
 *
 * Return: 1 if greater than zero, 0 if it's zero and -1 if less than zero.
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
_putchar('0');
return (0);
}

