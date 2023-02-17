#include <stdio.h>
/**
 * main - Prints the alphabet
 * print all letters except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'e' || alp == 'q')
		continue;
		putchar(alp);
	}

	putchar('\n');
	return (0);
}
