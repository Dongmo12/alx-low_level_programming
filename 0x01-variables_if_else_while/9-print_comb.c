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
	    
		if (n == 9)
			continue;
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}

	return (0);
}
