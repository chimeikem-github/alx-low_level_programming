#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 0;

	while (m < 10)
	{
	putchar("%d \n", m);
	m += 1;
	}

	putchar('\n');

	return (0);
}
