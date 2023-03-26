#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description: 'program prints _putchar'
 * Return: should return 0 if successful
 */
void times_table(void)
{
int y;
int a;
int b;
for (int i = 0; i < 10; i++)
{
for (int j = 0; j < 10; j++)
{
y = i * j;
if (y < 10)
{
a = y;
_putchar(a + '0');
}
else
{
a = y / 10;
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
