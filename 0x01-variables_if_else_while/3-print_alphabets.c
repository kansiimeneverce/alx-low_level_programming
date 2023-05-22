#include <stdio.h>
/**
 * main - prints the lower case and upper case
 * a@: print the lower case of the alphabet
 * b@: print the upper case of the alphabet
 * Return: always 0
 */
int main(void)
{
	int a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
