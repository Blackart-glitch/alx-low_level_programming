#include "main.h"

/**
 * print_numbers - print all single digits
 *
 * Return: 0 (success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
