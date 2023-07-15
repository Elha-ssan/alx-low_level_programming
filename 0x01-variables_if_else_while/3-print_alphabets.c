#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
        char le;

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	for (le = 'A'; le <= 'Z'; le++)
	{
		putchar(le);
	}
	putchar('\n');
	return (0);
}
