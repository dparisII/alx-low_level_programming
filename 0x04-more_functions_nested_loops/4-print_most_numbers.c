#include "main.h"

/**
 * printting from 0 to 9 but skipping 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
			_putchar(a);
		}
	}
}
