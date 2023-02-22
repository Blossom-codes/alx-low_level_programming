#include "main.h"
#include <unstd.h>
/**
 * main - prints _putchar, followed by a new line.
 * @c The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
