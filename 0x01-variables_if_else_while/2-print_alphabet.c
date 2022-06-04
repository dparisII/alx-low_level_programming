#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a list from a to z
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
