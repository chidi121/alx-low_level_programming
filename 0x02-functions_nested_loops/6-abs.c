#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @a: The integer to be computed
 *
 * Return: Absolute value of ab
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
