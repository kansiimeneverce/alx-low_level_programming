#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * a@: print the alphabet and remove the q and e
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
