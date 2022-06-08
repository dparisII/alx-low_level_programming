#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - main block
 * Description - this is a file to print -putchar
 * Return - 0
 */
int main(void)
{
char word[9] = "_putchar";
int i;

for (i = 0; i < 9; i++)
{
	_putchar(word[i]);
}
	_putchar('\n');
return (0);
}
