#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument counter 
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	exit(EXIT_SUCCESS);
}
