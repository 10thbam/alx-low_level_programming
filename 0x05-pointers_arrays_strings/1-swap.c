#include "main.h"

/**
* swap_int - swap the values of 2 integers
*@a: a pointer to an int
*@b: b pointer to an int
* Return: void
*/

void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
