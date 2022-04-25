#include "main.h"
/**
*_memset - fills memory with a constant byte
*@s: pointer block of memory to fill
*@b: value to set
*@n: bytes of memory
*Return: dest
*/

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

/*Declaring for*/
for (i = 0; i < n; i++)
{
*(s + i) = b; /*add 1 positon s*/

} /*End for*/

return (s);
}
