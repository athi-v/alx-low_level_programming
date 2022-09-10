#include <stdio.h>
/**
*main - prints alphabets
*Description: 'prints the alphabet in lowercase, and then in uppercase'
*Return: 0
*/
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
putchar('\n');
return (0);
}
