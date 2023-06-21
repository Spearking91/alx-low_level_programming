#include "main.h"
/**
 * main - print alphabet in lowercase
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char k;

	for(k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
