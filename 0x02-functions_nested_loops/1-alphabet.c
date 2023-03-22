#include "main.h"
/**
 * main - Entry point
 * print_alphabet: print the alphabet followed by a newline
 * Return: void
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
