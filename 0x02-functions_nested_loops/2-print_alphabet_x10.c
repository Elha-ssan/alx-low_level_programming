#include"main.h"
/**
 * 10 times the alphabet, in lowercase,
 */
void print_alphabet_x10(void)
{
	int counter;
	char letter;

	for (counter = '0'; counter <  '9'; counter++)
	{
	for (letter = 'a'; letter <= 'z'; letter ++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
