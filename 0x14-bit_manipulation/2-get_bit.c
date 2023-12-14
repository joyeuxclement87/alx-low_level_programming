#include"main.h"
/**
 * get_bit - entry pooitn
 * @n: number
 * @index: index to check
 * Return: value of return
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int div, check;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
div = 1 << index;
check = n & div;
if (check == div)
return (1);
return (0);
}
