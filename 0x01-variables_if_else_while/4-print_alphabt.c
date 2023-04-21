#include <stdio.h>
#include <stdlib.h>
/**
 * main - C language is so cool
 * Return: Our return here is 0
 */
int main(void)
{
        char ch = 'a';

        while (ch <= 'z'&& ch != 'q' && ch != 'e')
        {
        putchar(ch);
        ch++;
        }
        putchar('\n');
        return (0);
}
