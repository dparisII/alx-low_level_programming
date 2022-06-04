#include <stdio.h>
/**
 * main - main block
 * Description: printing all the digits from 0 to 10
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(48 + x);
		x++;
	}
	putchar('\n');
	return (0);
}
