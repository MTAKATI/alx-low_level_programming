#include <stdio.h>
#include <ctype.h>
#include <time.h>
/**
 * main - prints alphabets inlowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);

	for (i = 'A'; i <= 'Z'; i++)
	putchar(i);
	putchar('\n');

	return (0);

}
