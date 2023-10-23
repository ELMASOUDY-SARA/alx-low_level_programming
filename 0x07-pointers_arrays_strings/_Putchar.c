#include "main.h"
#include <unistd.h>

/**
 * _putchar file
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
