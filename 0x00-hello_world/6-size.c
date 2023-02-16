#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %lu bytes\n", sizeof(a));
printf("size of a int: %lu bytes\n", sizeof(b));
printf("size of a long int: %lu bytes\n", sizeof(c));
printf("size of a long long int: %lu bytes\n", sizeof(d));
printf("size of a float: %lu bytes\n", sizeof(f));
return (0);
}
