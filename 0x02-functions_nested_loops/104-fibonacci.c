#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers without using long long, malloc,
 * pointers, array/tables, or structures
 * Return: 0
 */

int main(void)
{
	int counter;
	double a = 1;
	double b = 1;
	double sum = 0;

	printf("1, ");

	for (counter = 2; counter <= 98; counter++)
	{
			sum = a + b;
			a = b;
			b = sum;
			if (counter != 98)
				printf("%.0lf, ", sum);
			else
				printf("%.0lf", sum);
	}
	printf("\n");

	return (0);
}
