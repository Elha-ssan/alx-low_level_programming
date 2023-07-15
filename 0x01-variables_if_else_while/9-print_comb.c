#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char i;
	for (i = 0; i < 16; i++)
	{
		if (i < 10)
	{
		putchar (i + '0');
	}
	if (i <= 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
