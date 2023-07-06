#include "main.h"

unsigned int c_i(char ch)
{
	return (ch - '0');
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, c;

	len = 0;
	while (b[len] != '\0')
		len++;

	if (b == NULL)
		return (0);

	c = c_i(b[0]);
	for (i = 0; i < (len - 1); i++)
	{

		if (c_i(b[i]) == 0 || c_i(b[i]) == 1)
			c = c * 2 + c_i(b[i + 1]);
		else
			return (0);
	}
	return (c);
}
