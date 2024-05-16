#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name parma
 * @f: function pointer
 *
 * Return: returns name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
