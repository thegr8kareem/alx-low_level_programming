#include <stdio.h>
/**
 * main -entry point
 * return 0 : success
 */

int main(void)
{
	int a;

	for (a = 0; a < 100; a++) 
	{
		putchar(a + '0');
		if (a < 99) 
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');
	return (0);
}
		
