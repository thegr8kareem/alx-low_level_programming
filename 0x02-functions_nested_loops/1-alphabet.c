#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar("%c", ch);
}

_putchar('\n');
}


