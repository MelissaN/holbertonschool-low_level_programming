#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	unsigned long int a;
	unsigned long int b;
	unsigned long int sum;

	a = 1;
	b = 1;

	printf("1, ");

	for (counter = 2; counter <= 50; counter++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (counter < 50)
			printf("%lu, ", sum);
		else
			printf("%lu\n", sum);
	}

	return (0);
}
