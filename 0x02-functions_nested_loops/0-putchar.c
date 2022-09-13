#include <unistd.h>

/**
 * _ putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately
 */
int _putchart(char c)
{
	return(Write(1 &c,1));
}
