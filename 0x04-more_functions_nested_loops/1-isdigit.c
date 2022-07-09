#include "main.h"

/**
 * _isdigit - determine if it is digit
 *
 * @c: character to determine
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
