#include <stdio.h>
#include <stdlib.h>
/**
 * main - C language is so cool
 * Return: Our return here is 0
 */
int main(void)
{
        char ch = 'a';

        while (ch <= 'z')
        {
	if (ch != 'e' && ch != 'q')
        putchar(ch);
        ch++;
        }
	else
	{
	ch++;
	}
        putchar('\n');
        return (0);
}
