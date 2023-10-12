#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_int - prints int
 * @list: argument from print all
 */
void print_int(va_list list)
{
printf("%d", va_arg(list, int));
}

/**
 * print_float - print float
 * @list: argument from print all
 */
void print_float(va_list list)
{
printf("%f", va_arg(list, double));
}

/**
 * print_char - print integer
 * @list: argument from print all
 */
void print_char(va_list list)
{
printf("%c", va_arg(list, int));
}

/**
 * print_str - print strings
 * @list: argument from print all
 */
void print_str(va_list list)
{
char *s = va_arg(list, char *);

s == NULL ? printf("(nil)") : printf("%s", s);

}

/**
 * print_all - prints any type
 * @format: argument to printer
 */

void print_all(const char * const format, ...)
{
va_list list;
int h = 0, j = 0;
char *s = "";

printTypeStruct printType[] = {
			{ "i", print_int },
			{ "f", print_float },
			{ "c", print_char },
			{ "s", print_str },
			{NULL, NULL}
};


va_start(list, format);

while (format && format[h])
{
j = 0;
while (j < 4)
	{
	if (*printType[j].type == format[h])
	{
	printf("%s", s);
	printType[j].printer(list);
	s = ", ";
	break;
	}
	j++;
	}
h++;
}

printf("\n");
va_end(list);
}
