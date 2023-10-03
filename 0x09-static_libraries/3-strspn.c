#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to be scanned
 * @accept: The string containing the list of characters to match
 *
 * Return: The number of bytes in the initial segment of 's' which
 * consist only of characters from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i, j;

    for (i = 0; s[i]; i++)
    {
        for (j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
            {
                count++;
                break;
            }
        }
        if (accept[j] == '\0')
            break;
    }

    return (count);
}

