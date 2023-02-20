#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alphabets inlowercase then uppercase
 *
 * Return: Answers 0(Success)
 */
int main(void)
{
	char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	
	for(i = 0; i < 52; i++)
	{
		putchar(letters[i]);	
	}
	return (0);	
}
