#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * f4 - finds the biggest num
 * @usrn: username
 * @len: length of username
 * Return: The biggest number
 */

int f4(char *usrn, int len)
{
	int ch, vch;
	unsigned int rand_num;

	ch = *usrn;
	vch = 0;

	while (vch < len)
	{
		if (ch < usrn[vch])
			ch = usrn[vch];
		vch += 1;
	}
	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 -> multiplies each char of usrn
 * @usrn: username
 * @len: length of the usrn
 * Return: multiplied char
 */

int f5(char *usrn, int len)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < len)
	{
