int is_accecpt(char c, const char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;

	char *p = (char *)s1;
	while (p[i])
	{
		if (is_accecpt(p[i],s2))
		{
			return (p  + i);
		}
		i++;
	}
	return ((void *)0);
}
