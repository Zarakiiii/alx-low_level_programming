#include "main.h"
/**
* rev_string - Reverses a string.
*
* @s: Pointer to the string to reverse.
*/
void rev_string(char *s)
{
int i, j;
char temp;
i = 0;
j = 0;
while (s[j] != '\0')
{
j++;
}
j--;
while (j > i)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
j--;
i++;
}
}
