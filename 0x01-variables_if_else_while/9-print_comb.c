#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description:  prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	for (int x = 0; x <= 9; x++)
	{
		putchar(x);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
