#include <stdio.h>
#include "main.h"
/**
*print_to_98 - Prints all natural numbers from n to 98
*followed by a new line
*
*@n:
*
*Return: 0
*/
void print_to_98(int n)
{
int num;
if (n <= 98)
{
for (num = n; num <= 98; num++)
{
printf("%d", num);
if (num < 98)
{
printf(", ");
}
}
}
else
{
for (num = n; num >= 98; num--)
{
printf("%d", num);
if (num > 98)
{
printf(", ");
}
}
}
printf("\n");
}
