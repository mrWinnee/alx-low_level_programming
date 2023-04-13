#include <stdio.h>
#include "main.h"
/**
 * main - checks the code.
 * @argc: size of argv.
 * @argv: the array.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1) + (int) sizeof(argv[0]) * 0);
	return (0);
}
