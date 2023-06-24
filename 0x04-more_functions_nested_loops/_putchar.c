#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 * Return: on succcess 1
 * on error, -1 is returned and error is set to appropriately
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
