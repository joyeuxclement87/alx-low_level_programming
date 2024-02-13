#include "main.h"
#include <stdio.h>
/**
 * main - function to print from 1 to 100 and new line after
 * but for multiples of three prints Fizz
 * for the multiples of five prints Buzz
 * Return: value for succes
 */
int main(void)
{
int a;

for (a = 1; a <= 100; a++)
{
if (a % 5 != 0 && a % 3 == 0)
{
printf(" Fizz");
}
else if (a % 3 != 0 && a % 5 == 0)
{
printf(" Buzz");
}
else if (a % 3 == 0 && a % 5 == 0)
{
printf(" FizzBuzz");
}
else if (a == 1)
{
printf("%d", a);
}
else
{
printf(" %d", a);
}
}
printf("\n");
return (0);
}
