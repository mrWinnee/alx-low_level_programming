#include <stdio.h>

/**
* times_table - a function that prints the 9 times table, starting with 0.
*
*/

void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (!(j == 9))
printf("%d, ", i * j);
else
printf("%d", i * j)
}
printf("\n");
}
}
