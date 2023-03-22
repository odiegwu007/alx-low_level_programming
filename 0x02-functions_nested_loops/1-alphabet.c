#include "main.h"
/**
 * main - Entry point
 * Description: 'program prints the alphabets followed by a newline'
 * Return: should return 0 if successful
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
