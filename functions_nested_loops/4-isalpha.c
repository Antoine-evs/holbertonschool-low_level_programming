#include "main.h"
/**
 * _isalpha - is char alphanumeric
 * @c : char as int to evaluate
 *
 * Return: 1 if alphanumeric, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >=  '0' && c <= '9'))
		return (1);
	return (0);
}

