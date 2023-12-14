#include "main.h"
/**
 * set_bit - entry point
 * @n: seted number
 * @index: index at which to set bit
 * Return: value for return
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int newbit;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
newbit = 1 << index;
*n = *n | newbit;
return (1);
}
