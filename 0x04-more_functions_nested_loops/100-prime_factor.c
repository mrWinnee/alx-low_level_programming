#include <stdio.h>
#include <math.h>
/**
 * main - checks code.
 * Return: always 0;
 */
int main(void)
{
	int n = 6;
	int n_sqrt = sqrt(n);
	int n_primes[30];
	int n_pm_index = 0;
	int new_n = n;
	int f;

	for (f = 2; f <= n_sqrt + 1 || new_n > 1;)
	{
		if (new_n % f == 0)
		{
			if (n_pm_index > 0)
			{
				int i;
				int append = 0;

				for (i = 0; i < n_pm_index; i++)
				{
					if (f % n_primes[i] == 0)
					{
						new_n /= f;
						append = 0;
						break;
					}
					else
						append = 1;
				}
				if (append == 1)
				{
					new_n /= f;
					n_primes[n_pm_index] = f;
					n_pm_index++;
				}
			}
			else
			{
				new_n /= f;
				n_primes[n_pm_index] = f;
				n_pm_index++;
			}
		}
		else
			f++;
	}
	printf("%d\n", n_primes[n_pm_index - 1]);
	return (0);
}
