#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number in its absolute state
 * @c: character to be checked
 * Return: should return the result of num
 */

void jack_bauer(void)
{
int i;
int j;
int h;
int m;
int s;
int n;
for (i = 0; i<24; i++)
{
for (j = 0; j<60; j++)
{
h = (i / 10) + '0';
m = (i % 10) + '0';
s = (j / 10) + '0';
n = (j % 10) + '0';
_putchar(h);
_putchar(m);
_putchar(':');
_putchar(s);
_putchar(n);
_putchar('\n');
}
}
}
