#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all numbers in base
 *
 * Retrun: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
