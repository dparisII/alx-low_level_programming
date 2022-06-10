#include "main.h"

/**
 * main
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		_putchar_integer(n * -1);
	}
	else
		print_integer(n);
}
void print_integer(int m)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (m /1 != 0)
		{
			_putchar((m / i) % 10 + '0');
		}
}
