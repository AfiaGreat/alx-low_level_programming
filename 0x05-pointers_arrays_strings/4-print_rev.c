#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to a string
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Print the characters in reverse order */
	for (i = length - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}

