#include "main.h"
/**
 * _strncpy - C function that copies a string
 * terminates null byte
 * works similar to the 'strncpy' library function
 * @dest: buffer storing the the string copy
 * @src: the sources string
 * @n: max number of copied bytes
 * Return: return
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
