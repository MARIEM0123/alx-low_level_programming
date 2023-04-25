#include <time.h>
#include <stdio.h>
/**
 * print_alphabet_x10 - C is so cool
 * Return: The return here is 0
 */
void print_alphabet_x10(void)
{
char a, x;

x = 0;
while (x < 10)
{
a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
x++;
}
}
