/**
 * _isupper - function checks for uppercase letter.
 * @c: lette to be checked.
 * Return: 1 if it's uppercase, 0 otherwise.
 */


int _isupper(int c)
	{
		if (c > 65 && c < 65 + 27)
			return (1);
		return (0);
	}
