#include <main.h>
#include <stdio.h>

/**
 * main - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
