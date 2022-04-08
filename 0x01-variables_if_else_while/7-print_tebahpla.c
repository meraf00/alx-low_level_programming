#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
		putchar(97 + i);

	putchar('\n');

	return (0);
}
