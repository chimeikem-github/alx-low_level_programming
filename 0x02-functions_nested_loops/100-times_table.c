#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	for (int i = 0; i <= n; i++)

	{
	for (int j = 0; j <= n; j++)
		{
	printf("%d ", i * j);
		}
	printf("\n");
	}

}









}
