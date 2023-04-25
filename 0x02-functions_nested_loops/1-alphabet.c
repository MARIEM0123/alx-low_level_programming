#include <unistd.h>
#include <stdio.h>
/**
 * main - C is so cool
 * Return: The return here is 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char a = 'a';
	while (a <= 'z')
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
