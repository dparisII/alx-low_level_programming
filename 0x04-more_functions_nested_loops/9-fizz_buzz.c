#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * Return: Always 0
  */
int main(void)
{
	int i;

	for (; i <=100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(i, "FizzBuzz ");
		else if (i % 3 == 0)
			printf(i, "Fizz ");
		else if (i % 5 == 0)
			printf(i, "Buzz ");
	}
	printf("Buzz\n");
	return (0);
}
