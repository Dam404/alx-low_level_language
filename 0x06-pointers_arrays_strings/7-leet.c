#include "main.h"
/**
*leet - this encodes a string into 1337
*@str: Pointer to the string
*
* Return: Pointer to the resulting string
*/
char *leet(char *str)
{
int i, j;
char leet_map[] = "aAeEoOtTlL";
char leet_replace[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_map[j] != '\0'; j++)
{
if (str[i] == leet_map[j])
{
str[i] = leet_replace[j];
break;
}
}
}

return (str);
}
