#include "main.h"

	/**
<<<<<<< HEAD
<<<<<<< HEAD
	 * sb_size - Calculates the size to cast the argument
=======
	 * get_size - Calculates the size to cast the argument
>>>>>>> dcb03ed... sandra boateng printf
=======
	 * sb_size - Calculates the size to cast the argument
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	 * @format: Formatted string in which to print the arguments
	 * @i: List of arguments to be printed.
	 *
	 * Return: Precision.
	 */
<<<<<<< HEAD
<<<<<<< HEAD
	int sb_size(const char *format, int *i)
=======
	int get_size(const char *format, int *i)
>>>>>>> dcb03ed... sandra boateng printf
=======
	int sb_size(const char *format, int *i)
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	{
		int curr_i = *i + 1;
		int size = 0;

		if (format[curr_i] == 'l')
			size = S_LONG;
		else if (format[curr_i] == 'h')
			size = S_SHORT;

		if (size == 0)

			*i = curr_i - 1;
		else
			*i = curr_i;

		return (size);
	}
