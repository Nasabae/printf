#include "main.h"

	/**
<<<<<<< HEAD
<<<<<<< HEAD
	 * sb_flags - Calculates active flags
=======
	 * get_flags - Calculates active flags
>>>>>>> dcb03ed... sandra boateng printf
=======
	 * sb_flags - Calculates active flags
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	 * @format: Formatted string in which to print the arguments
	 * @i: take a parameter.
	 *
	 * Return: Flags:
	 */
<<<<<<< HEAD
<<<<<<< HEAD
	int sb_flags(const char *format, int *i)
=======
	int get_flags(const char *format, int *i)
>>>>>>> dcb03ed... sandra boateng printf
=======
	int sb_flags(const char *format, int *i)
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	{
		/* - + 0 # ' ' */
		/* 1 2 4 8  16 */
		int j, curr_i;
		int flags = 0;
		const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
		const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

		for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
		{
			for (j = 0; FLAGS_CH[j] != '\0'; j++)
				if (format[curr_i] == FLAGS_CH[j])
				{
					flags |= FLAGS_ARR[j];
					break;
				}

			if (FLAGS_CH[j] == 0)
				break;
		}

		*i = curr_i - 1;

		return (flags);
	}