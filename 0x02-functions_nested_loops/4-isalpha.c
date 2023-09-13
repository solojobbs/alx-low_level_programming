#include "main.h"

/**
 * Returns 1 if c is a letter, lowercase or uppercase
 * 
 * Returns 0 otherwise
 *
 */

int _isalpha(int a)
{
	return ((a>='a' && a <= 'z')||(a >= 'A' && a <= 'Z'));
}
