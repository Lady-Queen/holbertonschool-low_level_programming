#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet
 * Description: This program print the alphabet in lowercase and uppercase.
 * Return: (0);
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
	putchar(i);
	}
	putchar('\n');

	return (0);
}
