#include "main.h"
/**
 * print_sign - prints the sign of a value
 *
 * @n: the value in question
 *
 * Return: (0) or (1) depending' or '-' for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return ('-');
	}
}
