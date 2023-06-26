#include "main.h"
#include <stdio.h>
/**
* _strcpy - Copies a string into a designated variable.
*
* @dest: Destination char array of characters.
* @src: Source char array of characters.
*
* Return: A string of characters upon success.
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int i;
while (src[l] != '\0')
{
l++;
}
for (i = 0; i < l; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
