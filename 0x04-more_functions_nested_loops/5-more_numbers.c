#include "main.h"
/**
 * more_numbers - prints the numbers o 14 ten times
 * Return: return nothing
 */
void more_numbers(void)
{
	int i, e;

	for (i = 0; i <= 10; i++)
	{
		for (e = 0; e <= 14; e++)
	{
		if (e > 9)
		{
			_putchar((e / 10) + '0');
		}
		_putchar((e % 10) + 0);
	}
		_putchar(10);
	}
}
