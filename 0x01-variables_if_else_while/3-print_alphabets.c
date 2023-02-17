#include <stdio.h>
/**
 * main - Prints the alphabet
 * prints all letters except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar (alp);

	putchar('\n');
	return (0);
}
