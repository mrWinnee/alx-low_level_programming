#include <stdio.h>

/**
 * print_last_digit - a function that print and return the last digit of number
 *
 * @n - a number n 
 * 
 * Return: last digit of the number n
 */

int print_last_digit(int n)
{
int last_digit;
if(n < 0)
{
n *= -1;
}
last_digit = n % 10;
_putchar('0' + last_digit);
return (last_digit);
}

