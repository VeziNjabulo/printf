/*
 * file - printf.c
 */
#include <unistad.h>
#include <stdarg.h>
#include "main.h"
/**
 * get_function - functions that gets the formats for _printf
 * calls the corresponding function.
 * @format: format (char, string, int, float)
 * Return : NULL or function associated.
 */
int (*get_function(const char *format))(va_list)
{
	unsigned int i = 0;
	code_f get_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_float},
		{"r", print_rev},
		{"b", print_bin},
		{"u", print_unsign},
		{"o", print_octal},
		{"x", print_x},
		{"X", print_X},
		{"R", print_rot13},
		{NULL, NULL}
	};
	while (find_f[i].sc)
	{
		if (find_f[i].sc[0] == (*format))
			return (find_f[i].f);
		i++;
	}
}

