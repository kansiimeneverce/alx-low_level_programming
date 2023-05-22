#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main block
*Description - putchar used to print alphabet
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
