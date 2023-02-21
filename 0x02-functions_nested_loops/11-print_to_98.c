#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natutral numbers
 *
 * @n: parameter to be printed
 *
 * Return: 0;
 */

void print_to_98(int n)
{
	int l;

	if (n >= 0  && n <= 98)
	{
		for (l = n ; l <= 98 ; l++)
		{
			printf("%d", l);
			if (l != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (l = n ; l <= 98 ; l++)
		{
			printf("%d", l);
			if (l != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (l = n ; l >= 98 ; l--)
		{
			printf("%d", l);
			if (l != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);
}
