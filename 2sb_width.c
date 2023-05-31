#include "main.h"

	/**
<<<<<<< HEAD
<<<<<<< HEAD
	 * sb_width - Calculates the width for printing
=======
	 * get_width - Calculates the width for printing
>>>>>>> dcb03ed... sandra boateng printf
=======
	 * sb_width - Calculates the width for printing
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	 * @format: Formatted string in which to print the arguments.
	 * @i: List of arguments to be printed.
	 * @list: list of arguments.
	 *
	 * Return: width.
	 */
<<<<<<< HEAD
<<<<<<< HEAD
	int sb_width(const char *format, int *i, va_list list)
=======
	int get_width(const char *format, int *i, va_list list)
>>>>>>> dcb03ed... sandra boateng printf
=======
	int sb_width(const char *format, int *i, va_list list)
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	{
		int curr_i;
		int width = 0;

		for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
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
