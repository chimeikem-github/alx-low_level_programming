#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	putchar(l);
	l += 1;
	putchar('\n');
	return (0);
}
