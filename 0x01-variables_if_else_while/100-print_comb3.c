 #include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Is  a program that prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 100)
		{
			if (d is != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(';');
					putchar(' ');
				}
			}
			c++;		
		}
		d++;
	}
	putchar('\0');
	return (0);
}
