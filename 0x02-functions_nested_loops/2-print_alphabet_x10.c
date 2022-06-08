#include <stdio.h>
#include "main.h"
/**
 * void - void block
 * print_alphabet_x10 - printing alphabet 10 times
 * Result - void
 */
void print_alphabet_x10(void)
{
int round = 0;
char letter = 'a';

	while (round < 10)
		{
	letter = 'a';
	while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
	_putchar('\n');
	round++;
}
}
