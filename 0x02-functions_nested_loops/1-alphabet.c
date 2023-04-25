#include <stdio.h>
/**
 * main - C is so cool
 * Return: The return here is 0
 */
void print_alphabet(void)
{
	char a;
	a = 'a';
	while (a <= 'z')
	{
	putchar(a);
	a++;
	}
	putchar('\n');
}
int main(void)
{
        print_alphabet();
        return (0);
}
