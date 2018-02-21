#include <stdlib.h>

/**
 * print_name - execute a function given as a parameter
 * @name: parameter that function ptr needs
 * @f:function to execute
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
