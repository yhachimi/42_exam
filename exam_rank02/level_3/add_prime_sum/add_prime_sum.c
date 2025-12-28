#include "unistd.h"

int is_prime(int a)
{
	int	i;

	i = 2;
	while (i <= (a / 2))
	{
		if ((a % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (sign * res);
}
void	ft_putnbr(long nb)
{
	char c;
	if (nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10  + 48;
	write(1,&c,1);

}

int main(int ac, char **av)
{
	int res = 0;
	int nb = ft_atoi(av[1]);

	if (ac != 2)
		return (write(1,"\n",1));
	while (nb > 1)
	{
		if (is_prime(nb))
			res += nb;
		nb--;
	}
	ft_putnbr(res);
	write(1,"\n",1);
}
