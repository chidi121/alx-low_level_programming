#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: number input
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
