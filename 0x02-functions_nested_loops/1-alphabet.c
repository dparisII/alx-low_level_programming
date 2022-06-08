#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
char  k = 'a';

for (k = 'a'; k <= 'z'; k++)
{
	_putchar(k);
}
	_putchar('\n');
}
