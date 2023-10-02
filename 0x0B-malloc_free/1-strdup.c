#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @s: The string to be duplicated
 *
 * Return: the duplicated string
 */

char *_strdup(char *s)
{
	int x = 0, i = 0;
	char *p;

	if (s == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		i++;
	}

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	while ((p[x] = s[x]) != '\0')
	{
		x++;
	}

	return (p);
}
