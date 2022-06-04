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

	while (x <= 9)
	{
		putchar(x);
		x++;
	}
	while (z <= 'f')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
