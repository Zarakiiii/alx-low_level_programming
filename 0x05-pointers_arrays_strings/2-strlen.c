#include "main.h"
/**
 * _strlen - Computes the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{ int i = 0;
while (s[i])
i++;
return (i);
}
