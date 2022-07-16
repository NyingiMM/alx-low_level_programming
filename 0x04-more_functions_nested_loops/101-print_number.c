#include "main.h"
#include <stdio.h>
/**
 * print_number - prints inters with putchar
 * @n: returns a number
 * Return: void
 */
void print_number(int n)
{
	unsigned int u;

	if (n < 0)
	{
		_putchar('_');
		u = -n;
	}
	else
	{
		u = n;
	}
	if (u / 10 != 0)
		print_number(u / 10);
	_putchar((u % 10) + '0');
}
