#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Is  a program that prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
int c = 0;
int d = 0;

while (d < 10){
	while (c < 10){
	if (d != c && d < c){
		putchar('0' + d);
		putchar('0' + c);
		if (c + d != 17){
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
