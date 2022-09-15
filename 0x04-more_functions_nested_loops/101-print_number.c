#include <stdio.h>
#include "main.h"

/**
* print_number - prints a number
* @n: The number to print
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
	putchar('-');
	n = -n;
	}

	if (n == 0)
	putchar('0');

	if (n / 10)
	printnumber(n / 10);
	putchar(n % 10 + '0');
}
{
	int n = atoi(argv[1]);

	printnumber(n);
	printf("\n");
}
