#include "stdlib.h"
int is_accecpt(char c, const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i])
	{
		if (!is_accecpt(s[i],accept))
			return (i);
		i++;
	}
	return (i);
}
