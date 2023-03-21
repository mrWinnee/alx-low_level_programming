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
if(n < 0)
{
n *= -1;
}
int last_digit = n % 10;
printf("%d", last_digit);
return (last_digit);
}

