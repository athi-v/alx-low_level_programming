#include <stdio.h>
/**
*main - prints alphabets
*Description: 'prints the alphabet in lowercase, and then in uppercase'
*Return: 0
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
putchar('\n');
return (0);
}
