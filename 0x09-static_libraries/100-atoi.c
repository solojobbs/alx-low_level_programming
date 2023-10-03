#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int result = 0;  // Initialize the result
    int sign = 1;    // Initialize the sign as positive (1)
    int i = 0;

    // Check for a negative sign and update the sign accordingly
    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    // Iterate through the characters in the string
    while (s[i] != '\0')
    {
        // Check if the current character is a digit
        if (s[i] >= '0' && s[i] <= '9')
        {
		result = result * 10 + (s[i] - '0');
        }
        else
        {
            break;
        }
        i++;
    }


    result *= sign;

    return result;
}
