#include "main.h"
#include <stdio.h>
void _puts(char *s);

void _puts(char *s)
{
        puts(s);
}

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
