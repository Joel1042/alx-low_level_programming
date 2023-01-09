#include "main.h"

/**
 * _sqrt_recursion - prints natural square root of number
 * @n:the number
 * Return: natural square root,-1 if not
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(find_root(n, 0));
}
