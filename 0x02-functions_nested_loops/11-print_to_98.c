#include "main.h"
/**
 * print_to_98 - Prints all natural numbers to 98
 * Description: 'prints all natural numbers to 98'
 * Return: should return 0 if successful
 */
void print_to_98(int n)
{
int i;
if (n >= 0 && n < 98)
{
for (i = n; i <= 98; i++)
{
if (i > 9)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
}
}
if (n >= 98)
{
for (i = n; i >= 98; i--)
{
int j;
int f;
int fa;
int fb;
f = i / 10;
j = i % 10;
if (f >= 10)
{
fa = f / 10;
fb = f % 10;
_putchar(fa + '0');
_putchar(fb + '0');
}
else
{
_putchar(f + '0');
}
_putchar(j + '0');
if (i > 98)
{
_putchar(',');
_putchar(' ');
}
}
}

if (n < 0)
{
int h;
int v;
int c;
int size = n;
for(i = size; i <= 98; i++)
{
if (i < 0 && i > size - 1)
{
h = abs(i);
_putchar('-');
if (h >= 10)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(h + '0');
_putchar(',');
_putchar(' ');
}
//putchar(h + '0');
//putchar(',');
}
else
{
v = abs(i) % 10;
c = abs(i) / 10;
if(c > 0)
{
_putchar(c + '0');
}
_putchar(v + '0');
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
}
}
}
}
