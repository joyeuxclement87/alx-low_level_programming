#include <stdio.h>
#include <math.h>
/**
 * main - function to find andprint largest number
 * followed by a new line
 * Return: 0
 */
int main(void)
{
long int a;
long int num;
long int max;

num = 612852475143;
max = -2;

while (num % 2 == 0)
{
max = 2;
num /= 2;
}
for (a = 3; a <= sqrt(num); a = a + 2)
{
while (num % a == 0)
{
max = a;
num = num / a;
}
}
if (num > 2)
max = num;
printf("%ld\n", max);
return (0);
}
