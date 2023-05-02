#include "main.h"

/**
 * wildcmp - We use this function to Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */


int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
		{
			return (1);
		}
		else if (*s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (0);
		}
	}
	else if (*s2 == '\0')
	{
		return (0);
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
