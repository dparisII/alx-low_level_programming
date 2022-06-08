#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * void - void block
 * Description - prints the alphabet, in lowercase
 * print_alphabet - printing the alphabet in small letter
 * Return: Always 0
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
