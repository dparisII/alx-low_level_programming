#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * Description: this is a list for listing a to z with out including e & q
 * Return: 0
 */

int main(void)
{
char x = 'a';
do
{
	if (x == 'e' && x == 'q')
	{
		continue;
	}

	putchar(x);
	x++;
}
while (x <= 'z');
return 0;
}
