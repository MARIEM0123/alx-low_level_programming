/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: The parameter
 * Return: != 0
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		l = l + _strlen_recursion(s + 1);
	}
	return (l);
}

/**
 * _pl - a function that returns the length of a string
 * @s: The first parameter
 * @i: the other parameter
 * @l: the lenght
 * Return: != 0
 */
int _pl(char *s, int i, int l)
{
	if (*s == 0)
		return (1);


	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (_pl(s, i + 1, l - 1));
}

/**
 * is_palindrome - a function that returns the length of a string
 * @s: The parameter
 * Return: != 0
 */
int is_palindrome(char *s)
{
	return (_pl(s, 0, _strlen_recursion(s)));
}

