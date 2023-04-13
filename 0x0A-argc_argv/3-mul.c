#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks the code.
 * @argc: size of argv.
 * @argv: the array.
 * Return: 0 success, 1 failed.
 */
int main(int argc, char *argv[])
{
	int __attribute__((unused)) result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
