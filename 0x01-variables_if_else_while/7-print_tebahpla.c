#include <stdio.h>
/**
 * main - print the alphabets in reveseal
 * a@: print the alphabets
 * Return: always 0
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
