#include "main.h"

/**
 * print_alphabet - prints out the alphabet
 * main - uses built in function
 * Return: 0 if succesful
 */


void print_alphabet_x10(void)
{
int i, j;
for (i = 0 ; i < 10 ; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
