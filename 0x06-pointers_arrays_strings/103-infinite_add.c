#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer parameters
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l = 0, i = 0, j = 0, d = 0;
	int k = 0, h = 0, o = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || l == 1)
	{
		if (i < 0)
			k = 0;
		else
			k = *(n1 + i) - '0';
		if (j < 0)
			h = 0;
		else
			h = *(n2 + j) - '0';
		o = k + h + l;
		if (o >= 10)
			l = 1;
		else
			l = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (o % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
