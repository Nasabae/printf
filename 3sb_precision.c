#include "main.h"

	/**
<<<<<<< HEAD
	 * sb_precision - Calculates the precision for printing
=======
	 * get_precision - Calculates the precision for printing
>>>>>>> dcb03ed... sandra boateng printf
	 * @format: Formatted string in which to print the arguments
	 * @i: List of arguments to be printed.
	 * @list: list of arguments.
	 *
	 * Return: Precision.
	 */
<<<<<<< HEAD
	int sb_precision(const char *format, int *i, va_list list)
=======
	int get_precision(const char *format, int *i, va_list list)
>>>>>>> dcb03ed... sandra boateng printf
	{
		int curr_i = *i + 1;
		int precision = -1;

		if (format[curr_i] != '.')
			return (precision);

		precision = 0;

		for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
		{
<<<<<<< HEAD
			if (sbis_digit(format[curr_i]))
=======
			if (is_digit(format[curr_i]))
>>>>>>> dcb03ed... sandra boateng printf
			{
				precision *= 10;
				precision += format[curr_i] - '0';
			}
			else if (format[curr_i] == '*')
			{
				curr_i++;
				precision = va_arg(list, int);
				break;
			}
			else
				break;
		}

		*i = curr_i - 1;

		return (precision);
	}
