#include <stdio.h>

/**
 * main - causes an infinite loop
 * while - this loop is commented out in oder to get the required outcome
 * printf - this statement is declaration of the break in the loop.
 * Return: 0
 */

int main(void)
{
	int i;

printf("Infinite loop incoming :(\n");

i = 0;

/**
 * printf -> loop break declaration
* while (i < 10)
* {
*	putchar(i);
* }
*/
/*printf -> break statement in infinite loop*/
printf("Infinite loop avoided! \\o/\n");

return (0);

}
