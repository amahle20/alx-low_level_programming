/**
 * _isupper - check if c is upper
 *
 * @c: input
 *
 * Return: 1 if its uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
