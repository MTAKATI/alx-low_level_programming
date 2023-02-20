#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: Answer 0(Success)
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
}
