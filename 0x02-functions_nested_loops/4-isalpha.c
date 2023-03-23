#include <ctype.h>
#include "main.h"
/**
 * _isalpha - prints 1 if character is alphabet, lowercase or uppercase
 * @c: character to be checked
 * Return: should return 1 if lowercase, uppercase, or alphabet
 */
int _isalpha(int c)
{
if (isalpha(c))
{
if (islower(c) || isupper(c))
{
return (1);
}
}
else
{
return (0);
}
return (0);
}
