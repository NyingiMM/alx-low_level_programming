#include "main.h"
/**
 * _puts - write a function prints a string plus new line to stdout
 * @str: the input string
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
