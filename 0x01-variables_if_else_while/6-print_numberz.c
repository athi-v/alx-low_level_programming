#include <stdio.h>
/**
*main - prints number
*Description: 'prints numbers 1 to 10'
*Return: 0
*/
int main(void)
{
int number;
for (number = 0; number < 10; number++)
putchar((number % 10) + '0');
putchar('\n');
return (0);
}
