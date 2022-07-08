#include <stdio.h>

/**
 * @result -> uses the if loop to iterate from 0 to 9
 * main - this will execute the loop of result
 * Return: always 0
 */

int result(int num)
{
	if (num <= 9)
	{
		printf("%d \t", num);
		result(num + 1);
	}
}
int main()
{
	int x = 0;
	
	result(x);
	return 0;
}
