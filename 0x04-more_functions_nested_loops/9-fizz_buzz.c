#include <stdio.h>
/**
 * main - prints from 1 to 100 and checks for fizz buzz condition.
 * Return: always 0 for success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int three_mul, five_mul;

		three_mul = i % 3;
		five_mul = i % 5;

		if (three_mul == 0 && five_mul == 0)
		{
			printf("FizzBuzz");
			if (i != 100)
				printf(" ");
			continue;
		}
		if (three_mul == 0)
		{
			printf("Fizz");
			if (i != 100)
				printf(" ");
			continue;
		}
		if (five_mul == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
			continue;
		}
		printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
