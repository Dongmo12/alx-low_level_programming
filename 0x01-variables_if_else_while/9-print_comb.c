#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9') /*print 0-9*/
	{
		putchar("%d, ",n);
		n++;
	}

	putchar('\n');

	return (0);
}
