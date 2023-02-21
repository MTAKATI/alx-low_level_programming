#include "main.h"

/**
 * _abs - return an absoulte value of an integer
 * @c: the value we return the absolute value for
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	else
	{
		return (c);
	}
}
