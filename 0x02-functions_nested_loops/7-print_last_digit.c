#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @p: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int p)
{	int py;

	py = (p % 10);

	while (py < 0)
	{
	py = (-1 * py);
	}
	_putchar(py + '0');

	return (0);
}
