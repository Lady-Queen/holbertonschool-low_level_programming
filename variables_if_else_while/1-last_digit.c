#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print without parameters
 *print the last digit of the number stored in the variable n.
 *Return: (0);
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("The last digit of %d is greater than 5\n", n);
	}

	else if (n == 0)
	{
		printf("The last digit of %d and is 0\n", n);
	}
	if (n < 6 && n != 0)
	{
		printf("The last digit of %d and is less than 6\n and not 0", n);
	}
	return (0);
}

