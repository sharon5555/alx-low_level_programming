#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: int 1
 * @b: int 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int cat;

	cat = *a;
	*a = *b;
	*b = cat;
}
