#include "main.h"
/**
* print_last_digit - It prints the last digit.
*@ld: The last digit to check for.
*
*Return: the value of the last digit.
*/
int print_last_digit(int ld)
{
int  last_digit;

if (ld < 0)

{

ld = -ld;

}

last_digit = ld % 10;

_putchar('0' + last_digit);

return (last_digit);
}
