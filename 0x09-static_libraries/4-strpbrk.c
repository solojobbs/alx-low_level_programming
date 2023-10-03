#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The characters to search for.
 *
 * Return: A pointer to the first occurrence of any character in
 *         'accept' in the string 's', or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *a = accept;
        while (*a)
        {
            if (*s == *a)
            {
                return s;
            }
            a++;
        }
        s++;
    }

    return NULL;
}

