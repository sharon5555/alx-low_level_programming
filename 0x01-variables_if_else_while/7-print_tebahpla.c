#include<stdio.h>

/**
 * main - entry point
 *
 * function name - prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
