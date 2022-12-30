#include "main.h"
#include <ctype.h>

/**
 * _is_zero -> checks if any given munber is zero
 * @argv: argument vector
 * Return: void
 */

void _is_zero(char *argv[])
{
	int x, is1 = 1, is2 = 1;

	for (x = 0; argv[1][x]; x++)
		if (argv[1][x] != '0')
		{
			is1 = 0;
			break;
		}

	for (x = 0; argv[2][x]; x++)
		if (argv[2][x] != '0')
		{
			is2 = 0;
			break;
		}

	if (is1 == 1 || is2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array -> sets memory to zero in a new array
 * @*ar: char array
 * @lar: length of the array
 * Return: pointer to char array
 */

char *_initialize_array(char *ar, int lar)
{
	int x = 0;

	for (x = 0; x < lar; x++)
		ar[x] = '0';

	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum -> check if number is of base10 and its length
 * @argv: argument vector
 * @n: row in array
 * Return: length of number
 */

int _checknum(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}
	return (ln);
}

/**
 * main -> entry point
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 - on success, or other on error
 */

int main(int argc, char *argv[])
{
	int ln, ln2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);

	ln = _checknum(argv, 1), ln2 = _checknum(argv, 2);
	_is_zero(argv), lnout = ln + ln2, nout = malloc(lnout + 1);

	if (nout == NULL)
		printf("Error\n"), exit(98);

	nout = _initialize_array(nout, lnout);
	k = lnout - 1, i = ln - 1, j = ln2 - 1, ca = addl = 0;

	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';

				nout[k] = (add % 10) + '0';
			}
			i = ln - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}

		if (j < 0)
		{
			if (nout[0] != '0')
				break;

			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = _initialize_array(nout, lnout);
			k = lnout - 1, i = ln - 1, j = ln2 - 1, ca = addl = 0;
		}

		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
