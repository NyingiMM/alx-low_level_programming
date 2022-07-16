#include "main.h"

/**
 * _isdigit - determine if it is digiT
 * @c: character to determine
 * Return: successful
 */
int _isdigit(int c)
{
	if ((c >= 48)  && (c <= 57))
		return (1);
	return (0);
}
