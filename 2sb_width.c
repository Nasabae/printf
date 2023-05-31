#include "main.h"

	/**
<<<<<<< HEAD
	 * sb_width - Calculates the width for printing
=======
	 * get_width - Calculates the width for printing
>>>>>>> dcb03ed... sandra boateng printf
	 * @format: Formatted string in which to print the arguments.
	 * @i: List of arguments to be printed.
	 * @list: list of arguments.
	 *
	 * Return: width.
	 */
<<<<<<< HEAD
	int sb_width(const char *format, int *i, va_list list)
=======
	int get_width(const char *format, int *i, va_list list)
>>>>>>> dcb03ed... sandra boateng printf
	{
		int curr_i;
		int width = 0;

		for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
		{
<<<<<<< HEAD
			if (sbis_digit(format[curr_i]))
=======
			if (is_digit(format[curr_i]))
>>>>>>> dcb03ed... sandra boateng printf
			{
				width *= 10;
				width += format[curr_i] - '0';
			}
			else if (format[curr_i] == '*')
			{
				curr_i++;
				width = va_arg(list, int);
				break;
			}
			else
				break;
		}

		*i = curr_i - 1;

		return (width);
	}
