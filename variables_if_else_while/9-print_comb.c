#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print numbers in ascending order.
 *
 * Return: (0);
 */

int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	if (d == 57)
	{
		continue;
	}
		putchar (44);
		putchar (32);
	}
	putchar('\n');
	return (0);
}
