#include <stdio.h>
/**
 * main - printing a single digit numbers
 * a@: print the possible numbers for zero to ten with a comma and space
 * Return: alway 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 9)
			continue;
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
