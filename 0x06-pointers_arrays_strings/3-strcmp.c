#include "main.h"

/**
 * _strcmp - compares
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (*s1 != '\0')
	{
		if (*s1 == *s2)
			i = 0;
		else
		{
			i = (*s1) - (*s2);
			break;
		}
	s1++;
	s2++;
	}
	return (i);
}
