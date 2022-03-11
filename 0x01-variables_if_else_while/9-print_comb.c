#include <stdio.h>

/**
 * main - Print single digit numbers in the format
 *
 * Description: Separated by commas
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9;  i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
	
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
