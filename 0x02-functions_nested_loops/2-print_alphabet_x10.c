#include "main.h"
/**
 * print_alphabet_x10()- prints alpahebts 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}

}
