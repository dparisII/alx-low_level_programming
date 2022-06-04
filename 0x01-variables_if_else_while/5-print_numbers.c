#include  <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -main block
 * Description: prints all digits of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n')
	return (0);
}
