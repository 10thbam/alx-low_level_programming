#include "main.h"

/**
* _strpbrk - matches any character
*@s: this is the c string
*@accept: character in str1 same as i str2
*Return: string s
**/

char *_strpbrk(char *s, char *accept)
{
int j;

while (*s != '\0') /*Declaring WWHILE*/
{
j = 0;
while (accept[j] != '\0') /*Evaluating *accept*/
{
if (*s == accept[j])
{
return (s);
}

j++; /*add j+1*/
}

s++; /*add s+1*/
}
return (0);

}
