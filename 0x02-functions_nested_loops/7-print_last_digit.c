#include "main.h"

/**
 * print_last_digit - this function prints the last digit
 * @r: this is the character we use
 * Return: 0
 */
int print_last_digit(int r)
{
	int n;
	
	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
