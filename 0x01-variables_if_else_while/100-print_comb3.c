#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Is  a program that prints all possible different combinations of two digits
 * different combinations of two digits
 * You are not allowed to use any variable of type char
 * Print only the smallest combination of two digits
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;
	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);
				
				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
		putchar('\n');
		return (0);
}
