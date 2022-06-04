#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char x = '0';
	char z = 'a';

	for (;x <= 9; x++)
	{
		putchar(x);
	}
	for (;z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
