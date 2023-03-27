#include "main.h"
/**
 * _puts - prints a string
 * @str: tring
 */

void _puts(char *str)
{
	while (*str != '\0')
		_ putchar(*str++);
	_putchar('\n');
}
