include "main.h"
/**
* swap_int-swapping variables
* @a:pointer1
* @b:pointer2
*/
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
