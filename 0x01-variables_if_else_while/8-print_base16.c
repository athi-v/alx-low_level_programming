#include <stdio.h>
/**
*main - prints alphabets and number
*Description: 'prints number in lowercase'
*Return: 0
*/
int main(void)
{
char alpha;
int number;
for (number = 0; number < 10; number++)
putchar((number % 10) + '0');
for (alpha = 'a'; alpha <= 'f'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
