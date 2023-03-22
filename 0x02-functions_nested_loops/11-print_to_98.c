#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: number to begin with.
 */ 

void print_to_98(int n)
{
int end_num = 98;
int i;
if (n <= end_num)
{
for (i = n; i <= end_num; i++)
{
if (i == end_num)
{
printf("%d\n", i);
break;
}
printf("%d, ", i);
}
}
else
{
for (i = n; i >= end_num; i--)
{
if (i == end_num)
{
printf("%d\n", i);
break;
}
printf("%d, ", i);
}
}
}
