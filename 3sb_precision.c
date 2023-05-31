#include "main.h"

	/**
<<<<<<< HEAD
<<<<<<< HEAD
	 * sb_precision - Calculates the precision for printing
=======
	 * get_precision - Calculates the precision for printing
>>>>>>> dcb03ed... sandra boateng printf
=======
	 * sb_precision - Calculates the precision for printing
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	 * @format: Formatted string in which to print the arguments
	 * @i: List of arguments to be printed.
	 * @list: list of arguments.
	 *
	 * Return: Precision.
	 */
<<<<<<< HEAD
<<<<<<< HEAD
	int sb_precision(const char *format, int *i, va_list list)
=======
	int get_precision(const char *format, int *i, va_list list)
>>>>>>> dcb03ed... sandra boateng printf
=======
	int sb_precision(const char *format, int *i, va_list list)
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	{
		int curr_i = *i + 1;
		int precision = -1;

		if (format[curr_i] != '.')
			return (precision);

		precision = 0;

		for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
		{
<<<<<<< HEAD
<<<<<<< HEAD
			if (sbis_digit(format[curr_i]))
=======
			if (is_digit(format[curr_i]))
>>>>>>> dcb03ed... sandra boateng printf
=======
			if (sbis_digit(format[curr_i]))
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
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
