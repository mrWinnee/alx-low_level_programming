#include "main.h"
/**
 * more_number - prints 10 times the numbers, from 0 to 14.
 */
void more_numbers(void)
{
	int i, times;
	for (times = 0; times <= 10; times++)
	{	
		for (i = 0; i <= 14; i++)
		{
			_putchar((i/10)+'0');
			_putchar((i%10)+'0');
			_putchar('\n');
		}
	}
}
