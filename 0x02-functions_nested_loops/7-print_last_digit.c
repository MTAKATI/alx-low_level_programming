#include "main.h"
/**
 * print_last_digit - displays the last digit of a number
 * @c: the number we get the last digit from
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	if (c % 10 == 0)
	{
		return (c);
	}
	else
	{
		int last_digit;

		last_digit = c % 10;
		return (last_digit);
	}
}
