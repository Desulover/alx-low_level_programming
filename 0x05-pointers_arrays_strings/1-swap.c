#include "main.h"

/**
* swap_int-> two integers swap the value they hold
* @a: parameter 1
* @b: parameter 2
*/
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
