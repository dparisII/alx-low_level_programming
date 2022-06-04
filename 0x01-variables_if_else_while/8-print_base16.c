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

	for (int x; x <= 9; x++)
	{
		putchar(x + '0');
	}
	for (int z; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
