#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *dest_ptr = dest;
    
    while (*dest_ptr)
    {
        dest_ptr++;
    }

    while (*src)
    {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }

    *dest_ptr = '\0';

    return dest;
}

