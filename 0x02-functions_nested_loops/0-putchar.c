#include "main.h"
/**
 * main -E ntry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char *sum = "main";
while (*sum)
{
	_putchar(*sum);
	sum++;
}
_putchar('\n');
return (0);
}
