#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lcw = 'a';

	while (lcw <= 'z')
	{
	if (lcw == 'e' || lcw == 'q')
	{
	lcw++;
	}
	else
	{
		putchar(lcw);
		lcw++;
	}
	}
	putchar('\n');

	return (0);
}

