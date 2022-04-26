#include "main.h"
#include <stdio.h>

/**
* print_diagsums - the sum of two diagonals
*@a: 2d array
*@size: number matrix
*Return: void
*/

void print_diagsums(int *a, int size)
{
/*Declaring WHILE*/
int i;
int sum1, sum2;

sum1 = 0;
sum2 = 0;

i = 0;
while (i < size) /*number repititions*/
{
/*sums for diagsums*/
sum1 = sum1 + *(a + i * size + i);
sum2 = sum2 + *(a + i * size + size - i - 1);

i++; /*add +1*/
}

printf("%i, %i\n", sum1, sum2);

}
