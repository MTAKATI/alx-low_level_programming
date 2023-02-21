#include "main.h"
/**
 * print_last_digit - displays the last digit of a number
 * @c: the number we get the last digit from
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	int l;

	l = c % 10;
	if (l < 0)
	{
		l *= -1;
	}
	_putchar(l + '0');
	return (l);
}
