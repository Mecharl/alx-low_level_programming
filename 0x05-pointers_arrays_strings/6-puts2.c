#include "main.h"

/**
 *puts2 - prints every character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void means it is correct
 */

voiid puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_Putchar (str[a]);
}

_putchar ('\n');
}
