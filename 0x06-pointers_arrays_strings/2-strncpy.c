#include "main.h"

/**
 * _strncpy - copies string
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: @dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
