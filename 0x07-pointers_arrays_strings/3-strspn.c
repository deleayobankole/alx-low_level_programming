#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
		}

		if (s[j] == '\0')
		{
			return (result);
		}
	}
	
	return (result);
}
