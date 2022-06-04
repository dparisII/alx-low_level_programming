#include <stdio.h>
#include <stdlib.h>

/**
 * main - main 
 * Descrption: thisis about listing the alphabet in small leter and then capital letter
 * Return: 0
 */

int main(void)
{
int x = 'a';
int z = 'A';

while (x <= 'z')
	{
		putchar(x);
		x++;
	}	
while (z <= 'Z')
	{
		putchar(z);
		z++;
	}
putchar('\n');
return (0);
}
