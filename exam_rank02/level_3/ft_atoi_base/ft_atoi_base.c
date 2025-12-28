int	is_space(char c)
{
	if (c == ' '  || (c >= 9 && c <= 13))
		return (1);
	return(0);
}

int is_valid_base(char c, int len)
{
	int i = 0;
	if (c >= 'A' && c <= 'Z')
		c += 32;
	char *str = "0123456789abcdef";
	while (i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	if (!str || !str_base)
		return (0);
	int i = 0;
	int sign = 1;
	int res = 0;
	while (is_space(str[i]) && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && is_valid_base(str[i],str_base))
	{
		res = res * str_base;

		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - 48;
		if (str[i] >= 'a' && str[i] <= 'z')
			res += str[i] - 'a' + 10;
		if (str[i] >= 'A' && str[i] <= 'Z')
			res += str[i] - 'A' + 10;

		i++;
	}
	return (res * sign);
}
/*int main()
{
	#include "stdio.h"
	printf("%d",ft_atoi_base("11111111",2));
}*/
