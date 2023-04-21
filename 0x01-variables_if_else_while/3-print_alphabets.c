#include <stdio.h>
#include <stdlib.h>
/**
 * main - C language is so cool
 * Return: Our return here is 0
 */
int main(void)
{
        char ch = 'a';
        char eh = 'A';

        while (ch <= 'z')
        {
        putchar(ch);
        ch++;
        }
        putchar('\n');
        while (eh <= 'Z')
        {
        putchar(eh);
        eh++;
        }
        return (0);
}
