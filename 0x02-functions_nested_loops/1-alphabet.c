#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints all of the alphabets in lower case
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}