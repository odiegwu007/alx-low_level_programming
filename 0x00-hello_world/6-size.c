#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %ld bytes(s)\n", sizeof(char));
printf("Size of an int: %ld bytes(s)\n", sizeof(int));
printf("Size of a long int: %ld bytes(s)\n", sizeof(long));
printf("Size of a long long: %ld bytes(s)\n", sizeof(long long));
printf("Size of a float: %ld bytes(s)\n", sizeof(float));
printf("Size of a double: %ld bytes(s)\n", sizeof(double));
printf("Size of a long double: %ld bytes(s)\n", sizeof(long double));
return (0);
}
