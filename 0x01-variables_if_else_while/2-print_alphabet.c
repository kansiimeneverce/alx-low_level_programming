#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print the small case letters 
*
* Return: Always 0;
*/

int main(void)
{

	char alpha;

	for (alpha = 'a'; alpha < '>'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
