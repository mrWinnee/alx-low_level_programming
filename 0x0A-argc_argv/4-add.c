#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - chacks the code.
 * @argc: size of argv.
 * @argv: the array.
 * Return: 0 succes, 1 failed.
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i][0]))
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
