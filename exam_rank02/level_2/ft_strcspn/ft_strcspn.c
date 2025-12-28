#include "stdlib.h"

size_t is_reject(char c,const  char *str)
{
	size_t i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;

	while (s[i])
	{
		if (is_reject(s[i],reject))
			return (i);
		i++;
	}
	return (i);
}
