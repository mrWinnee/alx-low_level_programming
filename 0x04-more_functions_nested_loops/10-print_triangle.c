#include "main.h"
/**
 * print_trinagle - self explanatory.
 * @size: sie of the triangle.
 */
void print_triangle(int size)
{
	int i, spaces, hashs;

	for (i = 0; i < size; i++)
	{
		for (spaces = size - i; spaces > 1; spaces--)
		{
			_putchar(' ');
		}
		for (hashs = 0; hashs < i + 1; hashs++)
		{
			_putchar('#');
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
