#include <stdio.h>
/**
*main - prints alphabets
*Description: 'prints the alphabet in lowercase and reverse'
*Return: 0
*/
int main(void)
{
char alpha;
for (alpha = 'z'; alpha >= 'a'; alpha--)
putchar(alpha);
putchar('\n');
return (0);
}
