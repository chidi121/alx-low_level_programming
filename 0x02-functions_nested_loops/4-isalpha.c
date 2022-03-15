#include "main.h"

/**
 * _isalpha - functions that checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter, lowercase or uppercase, Return 0 otherwise
 */

int _islower(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') (c <= 'Z')))
		return (1);
	else
		return (0);
}
