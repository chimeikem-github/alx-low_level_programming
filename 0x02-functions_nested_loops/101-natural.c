#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
	if ((i % 3) == 0 || (i % 5) == 0)
		sum++;
	}
	printf("%d\n", sum);

	return (0);
}
