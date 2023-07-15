#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char lette = 'A';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	while (lette <= 'Z')
	{
		 putchar(lette);
		 lette++
	}
	putchar('\n');
	return (0);
}
