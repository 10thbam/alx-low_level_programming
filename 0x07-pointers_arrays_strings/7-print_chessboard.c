#include "main.h"

/**
* print_chessboard - printss chessboeard
*@a: 2d array
*Return: void
*/
void print_chessboard(char (*a)[8])
{
/*Declaring variables*/
int i, j;

i = 0;
while (i < 8) /*number repititions*/
{
j = 0;
while (j < 8)
{
_putchar (a[i][j]);
j++;
}
_putchar('\n'); /*print new line*/
i++; /*add +1*/
}

}
