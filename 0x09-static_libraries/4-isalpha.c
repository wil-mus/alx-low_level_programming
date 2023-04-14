#include "main.h"

/**
 * _isalpha - function to print lowercase or uppercase
 *
 * @c: parameter to check
 *
 * Return : 1 if an alphabet
 * and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
