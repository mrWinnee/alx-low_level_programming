#include <stdio.h>
/**
 * main - checks the code.
 * @argc: size of argv.
 * @argv: the array.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	};
	return (0);
}
