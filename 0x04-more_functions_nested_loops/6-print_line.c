#include "main.h"
/**
 * print_line - draws a straight line
 * @n: integer parameters
 * Return: 0
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar (96);
		}
		else
		{
			_putchar ('\n');
		}
	}
}
