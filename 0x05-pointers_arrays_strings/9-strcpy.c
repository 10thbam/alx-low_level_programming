#include "main.h"
/**
*_strcpy - copies the string
*@dest: a pointer to a char
*@src: a pointer to a char
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{

int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

}
