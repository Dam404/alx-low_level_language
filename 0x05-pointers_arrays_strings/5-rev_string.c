#include "main.h"
/**
 *rev_string -Reverse a string
 *@s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
int len = 0;
int alpha = 0;
int temp_v;

while (s[len] != '\0')
{
len++;
}
for (alpha = 0; alpha < len / 2; alpha++)
{
temp_v = s[alpha];
s[alpha] = s[len - alpha - 1];
s[len - alpha - 1] = temp_v;
}
}
