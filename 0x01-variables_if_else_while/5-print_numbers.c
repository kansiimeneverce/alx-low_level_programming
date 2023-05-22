#include <stdio.h>
/**
 * main - print the numbers of base 0 - 9
 * a@: print the numbers
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
