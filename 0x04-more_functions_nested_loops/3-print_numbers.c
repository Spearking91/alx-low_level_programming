#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: The numbers from 0 to 9
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
