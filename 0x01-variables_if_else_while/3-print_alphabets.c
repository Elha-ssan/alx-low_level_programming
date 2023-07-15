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
	char lette;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (lette = 'A'; lette <= 'Z'; lette++)
	{
		 putchar(lette);
	}
	putchar('\n');
	return (0);
}
