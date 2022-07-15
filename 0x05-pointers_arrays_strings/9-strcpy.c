#include "main.h"
/**
 * _strcpy - copies a string pointed to by src
 * @dest: the destination
 * @src: the copied
 * Return: Return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
