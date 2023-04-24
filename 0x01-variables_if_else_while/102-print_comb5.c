#include <time.h>
#include <stdio.h>
/**
 * main - C is so cool
 * Return: The return here is 0
 */
int main(void)
{
        int a, b, c, d;

        a = 0;
        while (a < 10)
        {
        b = 0;
        while (b < 10)
        {
if (b==9)c= a+1;
else c=a;

        while (c < 10)
        {
if (b==9)     d=0;
    else d=b+1;
        while(d < 10)
            {
        if (a==0 && b==a && c==a && d==a)
            d++;
        else{
        putchar(a + 48);
        putchar(b + 48);
        putchar(' ');
        putchar(c + 48);
        putchar(d +48);
        if (a + 48 == 57 && b + 48 == 56 && c == a && d == a)
        break;
        else
        {
        putchar(',');
        putchar(' ');
        }
        }
d++;
        }
c++;
        }

        b++;
        }
        a++;
        }
        putchar('\n');
        return (0);
}

