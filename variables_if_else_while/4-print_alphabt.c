#include <stdio.h>
#include <stdlib.h>

/**
 * main - Excluir las letras 'q' y 'e'
 * Description: Prints the alphabet in lowercase
 * Return: (0);
 */

int main(void)

{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
	if (x != 'e' && x != 'q')
	putchar(x);
	}
	putchar ('\n');
	return (0);
}
