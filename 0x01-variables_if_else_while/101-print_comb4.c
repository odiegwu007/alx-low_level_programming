#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
if (i == j && k < 10)
{
continue;
}
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
