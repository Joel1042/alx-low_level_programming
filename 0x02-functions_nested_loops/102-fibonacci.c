#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 an 2
 * Return: 0
 */

int main(void)
{
	int X;
	int Y = 50;
	long a = 1;
	long b = 2;

	for (X = 1; X <= (Y / 2); X++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (Y % 2 == 1)
		printf("%li", a);
	printf("\n");
	return (0);

