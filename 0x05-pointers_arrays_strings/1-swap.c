#include "main.h"
/**
 * swap_int - swaps two integers' values
 * @a: the first entry
 * @b: the second entry
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
