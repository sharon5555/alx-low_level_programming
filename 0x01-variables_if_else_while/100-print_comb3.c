#include <stdio.h>

/**
 * main - prints 01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15,...
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{

					break;
				}
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
