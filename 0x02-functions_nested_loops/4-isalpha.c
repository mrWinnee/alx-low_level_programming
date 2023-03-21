/**
 * _isalpha - Checks if a character is alpha.
 * @c: The character to be checked.
 *
 * Return: 1 if character is alpha, 0 otherwise.
 */
int _isalpha(char c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}

