#include "main.h"
/**
 * _strlen - the length of a string
 *
 * @s: the input string
 * Return: the string's length
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
