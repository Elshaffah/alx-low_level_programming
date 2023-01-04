#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the c character to stdout
 * @c: The character to print
 *
 * Return: Always 1 (Sucess)
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char C)
{
	return (write(1, &c, 1));
}
