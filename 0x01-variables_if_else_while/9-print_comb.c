#include <stdio.h>

/**
 * main - main block
 *
 * Description: Print all possible combinations fo single-digit numbers.
 *
 * Numbers must be separated by commas and a space.
 *
 * You can only use `putchar` to print to console
 *
 * You can only use `putchar` up to four times.
 *
 * You are not allowed to use any variable of type `char`.
 *
 * Return: 0
 *
 */

int main(void)

{

int i = 0;



while (i < 10)

{
if (i == 9)
{
putchar(i + '0');
}
else
{
putchar(i + '0');
putchar(',');
putchar(' ');
}

i++;

}

putchar('\n');


return (0);

}
