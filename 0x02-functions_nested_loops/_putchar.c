#include "main.h"
#include <unistd.h>
/**
 * _putchar - will writes the character c to stdout
 * @c: This is he character to print
 *
 * Return: When successful,1.
 * if there is error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
