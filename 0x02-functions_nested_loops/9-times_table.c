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
if (j > 0 && j < 9)
printf("%s%d,", (i * j < 10 ? ".." : "."),i * j );
else
{
if (j == 0)
printf("%d,", i *j);
else
printf("%s%d", (i * j < 10 ? ".." : "."),i * j);
}
}
printf("\n");
}
}
