#include <stdio.h>
#include <main.h>
/**
 * main -E ntry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char z[] = " ALX SE";
int m;
m = 0;
while (m <= 8)
{
	_putchar(z[m]);
	m++;
}
_putchar('\n');
return (0);
}