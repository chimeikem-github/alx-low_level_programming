#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int y = 48;
int l = 'a';

while (y <= 57)
{
putchar(y);
y++;
}
while (l <= 'f')
{
	putchar(l);
	l++;
}
putchar('\n');
return (0);
}
