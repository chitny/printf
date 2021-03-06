#include "holberton.h"

/**
 * get_flag - checks flags for _printf
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags
 *
 * Return: 1 if a flag is there, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
