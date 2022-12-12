#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ int u = 48;
int p = 44;

while (u <= 57)
{ putchar(u);
if (u != 57)
{
	putchar(p);
	putchar(32);
}
u++;
}
putchar('\n');
return (0);
}
