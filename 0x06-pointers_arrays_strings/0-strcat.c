#include "main.h"


/**
 *
 * _strcat - function that concatenates two strings.
 *
 * @d: first entry
 * @s: second entry
 *
 */

char *_strcat(char *d, char *s)
{
    int len = 0;
    int i = 0;

    
    while (d[len] != '\0')
    {
        len++;
    }

    
    while (s[i] != '\0')
    {
        d[len + i] = s[i];
        i++;
    }

    
    d[len + i] = '\0';

    return d;
}

