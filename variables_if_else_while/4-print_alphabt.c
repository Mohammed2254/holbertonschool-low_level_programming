#include <stdio.h>

/**
* main - prints the alphabet in lowercase, then uppercase
*
* Return: Always 0
*/
int main(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{

if (i != 'q' && i != 'e')
{
putchar(i);
}
}

putchar('\n');

return (0);
}
