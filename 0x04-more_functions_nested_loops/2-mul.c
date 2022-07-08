#include <stdio.h>
#include "main,h"
/**
 * main - prints the multiplication of two numbers
 * scanf -> takes user input 
 * @multiply - multiplies two numbers input by the user
 */

int main()
{
	int num1, num2, multiply;

	printf("please enter the first number: ");
	scanf("%d", &num1);

	printf("enter your second number: ");
	scanf("%d", &num2);

	multiply = num1 * num2;

	printf("The product of %d and %d is: %d", num1, num2, multiply);
	return 0;
}
