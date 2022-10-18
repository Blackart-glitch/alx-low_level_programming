#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabets 10 times in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char c;

	for (int i = 0 ; i < 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
		putchar(c);
		}
	putchar('\n');
	}
}
