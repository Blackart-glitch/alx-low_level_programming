#include "main.h"

/**
 * print_last_digit - prints last digit of integer input
 * @n: integer to modify
 *
 * Return: l
 */
int print_last_digit(int n)
{
	int p, l;

	l = n % 10;
	p = '0' + l;
	return (p);
}
