#include "main.h"

	/**
<<<<<<< HEAD
<<<<<<< HEAD
	 * sbis_printable - Evaluates if a char is printable
=======
	 * is_printable - Evaluates if a char is printable
>>>>>>> dcb03ed... sandra boateng printf
=======
	 * sbis_printable - Evaluates if a char is printable
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	 * @c: Char to be evaluated.
	 *
	 * Return: 1 if c is printable, 0 otherwise
	 */
<<<<<<< HEAD
<<<<<<< HEAD
	int sbis_printable(char c)
=======
	int is_printable(char c)
>>>>>>> dcb03ed... sandra boateng printf
=======
	int sbis_printable(char c)
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	{
		if (c >= 32 && c < 127)
			return (1);

		return (0);
	}

	/**
<<<<<<< HEAD
<<<<<<< HEAD
	 * sbappend_hexa_code - Append ascci in hexadecimal code to buffer
=======
	 * append_hexa_code - Append ascci in hexadecimal code to buffer
>>>>>>> dcb03ed... sandra boateng printf
=======
	 * sbappend_hexa_code - Append ascci in hexadecimal code to buffer
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	 * @buffer: Array of chars.
	 * @i: Index at which to start appending.
	 * @ascii_code: ASSCI CODE.
	 * Return: Always 3
	 */
<<<<<<< HEAD
<<<<<<< HEAD
	int sbappend_hexa_code(char ascii_code, char buffer[], int i)
=======
	int append_hexa_code(char ascii_code, char buffer[], int i)
>>>>>>> dcb03ed... sandra boateng printf
=======
	int sbappend_hexa_code(char ascii_code, char buffer[], int i)
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	{
		char map_to[] = "0123456789ABCDEF";
		/* The hexa format code is always 2 digits long */
		if (ascii_code < 0)
			ascii_code *= -1;

		buffer[i++] = '\\';
		buffer[i++] = 'x';

		buffer[i++] = map_to[ascii_code / 16];
		buffer[i] = map_to[ascii_code % 16];

		return (3);
	}

	/**
<<<<<<< HEAD
<<<<<<< HEAD
	 * sbis_digit - Verifies if a char is a digit
=======
	 * is_digit - Verifies if a char is a digit
>>>>>>> dcb03ed... sandra boateng printf
=======
	 * sbis_digit - Verifies if a char is a digit
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	 * @c: Char to be evaluated
	 *
	 * Return: 1 if c is a digit, 0 otherwise
	 */
<<<<<<< HEAD
<<<<<<< HEAD
	int sbis_digit(char c)
=======
	int is_digit(char c)
>>>>>>> dcb03ed... sandra boateng printf
=======
	int sbis_digit(char c)
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	{
		if (c >= '0' && c <= '9')
			return (1);

		return (0);
	}

	/**
<<<<<<< HEAD
<<<<<<< HEAD
	 * sbconvert_size_number - Casts a number to the specified size
=======
	 * convert_size_number - Casts a number to the specified size
>>>>>>> dcb03ed... sandra boateng printf
=======
	 * sbconvert_size_number - Casts a number to the specified size
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	 * @num: Number to be casted.
	 * @size: Number indicating the type to be casted.
	 *
	 * Return: Casted value of num
	 */
<<<<<<< HEAD
<<<<<<< HEAD
	long int sbconvert_size_number(long int num, int size)
=======
	long int convert_size_number(long int num, int size)
>>>>>>> dcb03ed... sandra boateng printf
=======
	long int sbconvert_size_number(long int num, int size)
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	{
		if (size == S_LONG)
			return (num);
		else if (size == S_SHORT)
			return ((short)num);

		return ((int)num);
	}

	/**
<<<<<<< HEAD
<<<<<<< HEAD
	 * sbconvert_size_unsgnd - Casts a number to the specified size
=======
	 * convert_size_unsgnd - Casts a number to the specified size
>>>>>>> dcb03ed... sandra boateng printf
=======
	 * sbconvert_size_unsgnd - Casts a number to the specified size
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	 * @num: Number to be casted
	 * @size: Number indicating the type to be casted
	 *
	 * Return: Casted value of num
	 */
<<<<<<< HEAD
<<<<<<< HEAD
	long int sbconvert_size_unsgnd(unsigned long int num, int size)
=======
	long int convert_size_unsgnd(unsigned long int num, int size)
>>>>>>> dcb03ed... sandra boateng printf
=======
	long int sbconvert_size_unsgnd(unsigned long int num, int size)
>>>>>>> ee4eda3599bd85b367bd7fe3e8af90b60b0876cc
	{
		if (size == S_LONG)
			return (num);
		else if (size == S_SHORT)
			return ((unsigned short)num);

		return ((unsigned int)num);
	}
