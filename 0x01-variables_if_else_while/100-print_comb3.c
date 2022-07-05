#include <stdio.h>

/**
 * main - entry point
 *
 * Return: A;ways 0 (success)
 */
int main(void)
{
	int d;

	for (d = 0; d < 100; d++)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
