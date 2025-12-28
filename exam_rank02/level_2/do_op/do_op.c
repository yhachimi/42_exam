#include "unistd.h"
#include "stdlib.h"

int is_digit(char c)
{
	if ( c >= '0' && c <= '9')
		return 1;
	return (0);
}
int ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	res = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (is_digit(str[i]) && str[i])
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (!is_digit(str[i]) && str[i] != '\0')
		exit(write(1,"\n",1));
	return (res * sign);
}

int	operations(char c, int nb, int s)
{
	if (c == '+')
		return (nb + s);
	else if (c == '-')
		return (nb - s);
	else if (c == '*')
		return (nb * s);
	else if (c == '/')
		return (nb / s);
	else if (c == '%')
		return (nb % s);
	else
		exit(write(1,"\n",1));
}
void	ft_putnbr(long nb)
{
	char c;
	if (nb < 0)
	{
		nb = -nb;
		write(1,"-",1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c  = nb % 10 + 48;
	write(1,&c,1);
}

int main(int ac,char **av)
{
	if (ac != 4)
		return (write(1,"\n",1));
	ft_putnbr(operations(av[2][0],ft_atoi(av[1]),ft_atoi(av[3])));
}
