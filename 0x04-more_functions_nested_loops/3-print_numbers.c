#include "main.h"
#include <stdio.h>

/**
 * printing the number from 0 to 9.
 * Return: Always 0
 */
void print_numbers(void);
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar("%c", a);
	}
	_putchar('\n');
	return (0);
}
