#include "main.h"
/**
 * flip_bits - counts the number
 * @n: first num
 * @m: second num
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, cntbit = 0;
unsigned long int crrnt;
unsigned long int exclsive = n ^ m;

k = 63;
while (k >= 0)
{
crrnt = exclsive >> k;
if (crrnt & 1)
cntbit++;
k--;
}
return (cntbit);
}
