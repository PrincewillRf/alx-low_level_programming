#include <stdio.h>

/**
 * main -main function
 *
 * Return:always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i != 90)
		{
			putchar(','');
			putchar(' ');
		
	}
	putchar('\n');
	return (0);
}
