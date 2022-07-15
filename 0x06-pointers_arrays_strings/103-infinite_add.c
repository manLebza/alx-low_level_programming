#include "main.h"

/**
 * infinite_add -> C function that adds two numbers,
 * stored in strings to a buffer
 * @n1:first number
 * @n2:second number
 * @r: store result
 * @size_r: size of buffer
 * @r_index--: current index of buffer
 * @n1--: first number in add_strings
 * @n2--: secondnumber in add_strings
 * Return: returns pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}
/**
 * add_strings -> adds the numbers strored in two strings..
 * @n1: the string with the first number to be added
 * @n2: the string with the second number to be added
 * @n1-- : number one in buffer,the string with should be added
 * n2-- : number two in buffer,the string that will follow
 * @r_index--: current buffer index needed to be incremented
 * Return: a pointer to the result if r can store the sum
 *	- if r cannot store the sum return 0.
 */

char *add_strings(char *n1, char *n2, n1--, n2--, r_index--)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}

