#include "main.h"
#include <swap_int>

/**
* swap_inte -> a function that swaps the values of two integers
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
