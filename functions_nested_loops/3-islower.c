#include "main.h"
/**
 * _islower - is char lowercase
 *
 * Return : 1 if is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
