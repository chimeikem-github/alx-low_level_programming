#include <stdio.h>
#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n: parameter
*Return: returns nothing
*/
void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
