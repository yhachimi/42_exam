#include "unistd.h"

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	res = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = str[i] == '-' ? -sign:sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}

void	ft_putnbr(long nb)
{
	if (nb < 0)
	{
		nb = -nb;
		write(1,"-",1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	char c = nb % 10 + 48;
	write(1,&c,1);
}
int main(int ac, char **av)
{
	if (ac < 2)
		return (write(1,"\n",1));
	int	x = ft_atoi(av[1]);
	int	i = 1;
	while (i < 10)
	{
		ft_putnbr(i);
		write(1," x ",3);
		ft_putnbr(x);
		write(1," = ",3);
		ft_putnbr(x * i);
		write(1,"\n",1);
		i++;
	}
}
