#include "main.h"


/**
 * main - print _putchar
 * main  return : 0
 */

int main(void)
{

int i;
char caract[] = "_putchar";

for (i = 0 ; i < 8 ; i++)
{
_putchar(caract[i]);
}
_putchar('\n');
return (0);
}
