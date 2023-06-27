#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
    int length = 0;
    int half_length;
    int i;

    while (str[length] != '\0')
        length++;

    half_length = (length - 1) / 2;

    for (i = half_length + 1; i < length; i++)
        putchar(str[i]);

    putchar('\n');
}

