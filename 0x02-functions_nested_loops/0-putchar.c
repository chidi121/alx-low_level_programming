#include <stdio>
#include "main.h"

/**
 * main - Prints putchar
 *
 * REturn: Always 0 (Success)
 */

int main(void)
{
	char*sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');


	return (0);
}
