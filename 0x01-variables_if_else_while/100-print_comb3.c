#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 for (int i = 0; i < 10; i++)
	 {
		 for (int j = 0; j < 10; j++)
		 {
		 if (i == j)
		 {continue;
		 
		 }
		 putchar(i + '0');
		 putchar(',');
		 putchar(' ');
		 putchar(j + '0');
		 putchar('\n');
	 }
 }
 return (0);
}
