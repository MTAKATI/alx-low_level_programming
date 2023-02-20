#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - displays last digit
 *
 * Return: Always 0(Success)
 */
int main(void)
{	
	int n, lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	while (n != 0)
	{
		lastn %= 10;
		if (lastn % 10 == 0)
		{
			if (lastn > 5)
			{
				printf("Last digit of %d is %d and is greater than 5", n, lastn);
			}
			else if ((lastn < 6) && (lastn > 0))
			{
				printf("Last digit of %d is %d and is less than 6 and not 0", n, lastn);
			}
			else
			{
				printf("Last digit of %d is %d and is 0", n, lastn);
			}
		}
	}
	return (0);
}
