char    *ft_strrev(char *str)
{
	int i = 0;
	int l = 0;
	char c;
	while (str[l])
		l++;
	--l;
	while (i < l)
	{
		c = str[i];
		str[i] = str[l];
		str[l] = c;
		l--;
		i++;
	}
	return (str);
}
