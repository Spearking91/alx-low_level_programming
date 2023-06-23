#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: The numbers from 0 to 14 10x
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 14; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 0)
	{
	_putchar((b / 14) + '0');
	}
	_putchar((b % 14) + '0');
	}
	_putchar('\n');
	}
}
