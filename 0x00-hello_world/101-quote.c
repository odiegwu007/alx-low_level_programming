#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char message1[50] = "and that piece of art is useful\"";
char message2[] = " - Dora Korpar, 2015-10-19\n";
char result[100];
strcpy(result, message1);
strcat(result, message2);
write(STDERR_FILENO, result, sizeof(result) - 1);
return (1);
}
