#include "function_pointers.h"

/**
 * print_name -Prints given name using given parameter
 * @name: characters that represent name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
