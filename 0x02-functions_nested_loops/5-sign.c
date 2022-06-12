#include "main.h"

/**
 * print_sign - is a funciton that prints the sign of a number
 * @n: is the input of the checker
 * Return: 0
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar("+");
	}
	else if (n == 0)
	{
		vlaue = 0;
		_putchar("0");
	}
	else
	{
		value = -1;
		_putchar("-");
	}
	return (value);
}
