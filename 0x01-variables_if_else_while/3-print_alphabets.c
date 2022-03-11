#include <stdio.h>

/**
 * main - alphabet in lowercaes, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchare(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
