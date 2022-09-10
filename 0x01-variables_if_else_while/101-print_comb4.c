#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, p, a;

	for (i = 0; i <= 9; i++)
	{
		for (p = 1; p <= 9; p++)
		{
			for (a = 2; a <= 9; a++)
			{
			if (a > p && p > i)
			{
				putchar(i + '0')
				putchar(p + '0')
				putchar(a + '0')
					if (i != 7)
				{
					putchar(',')
					putchar(' ')
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
