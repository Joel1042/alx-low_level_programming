#include "main.h"

/**
 * is_prime_number - prints prime number
 * @n: the prime number
 * Return: 1 if prime number,0 if not
 */
int is_prime_number(int n)
{
	int x = 0;
	int y = 0;

	if (x * y == n || x > y)
		return (1);

	if (x * y == n || x == y)

		return (0);
	return (is_prime_number(n));
}
