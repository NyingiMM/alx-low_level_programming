#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int z = 1, zz;

	while (z <= size && size > 0)
	{
		zz = 0;
		while (zz < size - z)
		{
			_putchar(' ');
			zz++;
		}
		zz = 0;
		while (zz < i)
		{
			_putchar('#');
			zz++;
		}
		_putchar('\n');
		z++;
	}
	if (z == 1)
		_putchar('\n');
}
