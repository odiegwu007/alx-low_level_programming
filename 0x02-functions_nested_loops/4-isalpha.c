#include <ctype.h>
#include "main.h"
/**
 * _isalpha - prints 1 if character is lowercase or uppercase
 * @c: character to be checked
 * Return: should return 1 if lowercase
 */
int _isalpha(int c)
{
if (isalpha(c) && islower(c) || isupper(c))
{
return (1);
}
else
{
return (0);
}
return (0);
}
