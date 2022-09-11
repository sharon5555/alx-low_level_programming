#include <stdio.h>

/**
 * main - prints all possible combinations of two different digits,
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digits;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit1 = digit1 + 1; digits < 10; digits++)
		{
			putchar((digits % 10) + '0');
			putchar((digits % 10) + '0');
			if (digit1 == 8 && digits == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
