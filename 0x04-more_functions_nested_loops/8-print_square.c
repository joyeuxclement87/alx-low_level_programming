#include "main.h"
/**
 * print_square - square to be printed followed by new line
 * @size: square's size
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int a;
int b;

for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
