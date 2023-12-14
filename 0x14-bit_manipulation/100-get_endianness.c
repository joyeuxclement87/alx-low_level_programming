#include "main.h"
/**
 * get_endianness - entry point
 * Return: for value
 */
int get_endianness(void)
{
int k;
char *b;

k = 1;
b = (char *)&k;
return (*b);
}
