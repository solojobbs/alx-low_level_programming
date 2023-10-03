#include "main.h"

/**
 * _strcpy - Copies a string (including the null terminator) from 'src' to 'dest'.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: A pointer to the destination buffer 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}

