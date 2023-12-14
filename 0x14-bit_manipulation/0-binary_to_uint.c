#include "main.h"
/**
 * binary_to_uint - convertion of numbers
 * @b: pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
int j;
unsigned int number;

number = 0;
if (!b)
return (0);

j = 0;
while (b[j] != '\0')
{
if (b[j] != '0' && b[j] != '1')
return (0);
j++;
}
for (j = 0; b[j] != '\0'; j++)
{
number <<= 1;
if (b[j] == '1')
number += 1;
}
return (number);
}
