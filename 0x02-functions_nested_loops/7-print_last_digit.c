#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number in its absolute state
 * @c: character to be checked
 * Return: should return the result of num
 */

int print_last_digit(int c)
{
int num;
int d;
num = c % 10;
if (c < 0)
{
num = c * -1;
}
d = num + '0';
_putchar(d);
return (num);
}
