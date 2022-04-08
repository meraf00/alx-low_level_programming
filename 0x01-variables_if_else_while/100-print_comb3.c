#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	}

	return (0);
}
