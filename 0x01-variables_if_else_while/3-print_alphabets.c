#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints alphabets
*Description: 'prints the alphabet in lowercase, and then in uppercase'
*Return: 0
*/
int main(void)
{
char alphabets;
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
putchar(alphabets);
}
putchar('\n');
return (0);
}
