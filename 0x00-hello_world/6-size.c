#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %ld\n bytes(s)", sizeof(char));
printf("Size of an int: %ld\n bytes(s)", sizeof(int));
printf("Size of a long int: %ld\n bytes(s)", sizeof(long));
printf("Size of a long long: %ld\n bytes(s)", sizeof(long long));
printf("Size of a float: %ld\n bytes(s)", sizeof(float));
printf("Size of a double: %ld\n bytes(s)", sizeof(double));
printf("Size of a long double: %ld\n bytes(s)", sizeof(long double));
return (0);
}
