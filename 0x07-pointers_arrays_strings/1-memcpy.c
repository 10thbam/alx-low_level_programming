#include "main.h"
/**
*_memcpy - copy number adress from to address "from" to address "to"
*@dest: content is to be copied
*@src: source of data
*@n: bytes of memory
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n) /*Declaring WHILE*/
{
*(dest + i) = *(src + 1); /*add 1 positon dest and src*/
i++;

} /*END WHILE*/

return (dest);
}
