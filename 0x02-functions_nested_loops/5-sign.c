#include <ctype.h>
#include "main.h"
/**
 * print_sign - prints symbols
 * @c: character to be checked
 * Return: should return 1, -1 and 0
 */
int print_sign(int n)
{
char plus = '+';
char neg = '-';
char zero = '0';
if (n > 0)
{
_putchar(plus);
return (1);
}
else if (n < 0)
{
_putchar(neg);
return (-1);
}
else
{
_putchar(zero);
return (0);
}
return (0);
}
