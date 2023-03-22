#include <stdio.h>

/**
* jack_bauer - a function that prints every minute of the day, starting from 00:00 to 23:59.
*
*/


void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10)
{
printf("0%d:", i);
}
else
{
printf("%d:", i);
}
if (j < 10)
{
printf("0%d\n", j);
}
else
{
printf("%d\n", j);
}
}
}
}
