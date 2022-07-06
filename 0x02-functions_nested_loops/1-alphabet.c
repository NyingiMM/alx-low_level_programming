#include "main.h"

/**
 * print_alphabet - prints out alphabet in lowercase
 *
 * Return: 0 if success
 */

void print_alphabet(void)

{
	int lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');

	return (0);
}
