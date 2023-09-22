#include "main.h"


/**
 *
 * _strcat - function that concatenates two strings.
 *
 * @d: destination string
 * @s: source string
 *
 * Return: A pointer to the resulting string d
 *
 */

char *_strcat(char *d, char *s)
{
    int len;
    int i;

    for(len = 0; d[len] != '\0'; len++)
	    ;
    for(i = 0; s[i] != '\0'; i++)
    {
	    d[len + i] = s[i];
    }    
    d[len + i] = '\0';

    return d;
}

