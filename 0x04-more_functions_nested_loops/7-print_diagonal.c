#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: length of the line.
 */
void print_diagonal(int n)
{
	int i, spaces;

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i + 1 != n)
			_putchar('\n');
	}
	_putchar('\n');
}
