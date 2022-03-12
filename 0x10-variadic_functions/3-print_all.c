/*
 * File - 3-print_all.c
 * Made by: Chris Lind
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to the character being printed.
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - Prints a int.
 * @arg: A list of arguments pointing to the integer being printed.
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * @arg: A list of arguments pointing to the float being printed.
 */
void print_float(va_list arg)
{
	double num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to the string being printed.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Function that prints anything.
 * @format: Characters representing argument types.
 * @...: Variable number of arguments that will be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
	print_t funct[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funct[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			funct[j].print(args);
			sep = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
