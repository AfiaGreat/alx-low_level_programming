#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int sum = 2772;
    char password[100];
    int index = 0;
    int rand_num;

    srand(time(0));

    while (sum > 122)
    {
        rand_num = rand() % 100;
        password[index] = rand_num;
        sum -= rand_num;
        index++;
    }

    password[index] = sum;
    password[index + 1] = '\0';

    printf("%s", password);

    return (0);
}

