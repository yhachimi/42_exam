#include "unistd.h"

int	ft_atoi(char *str)
{
	int	i,sign,res;
	i = 0;res = 0; sign = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = str[i] == '-' ? -sign:sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10  + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
void	ft_putnbr(long nb)
{
	if (nb < 0)
	{
		nb  = -nb;
		write(1,"-",1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	char c = nb % 10 + 48;
	write(1,&c,1);
}
int	main(int ac, char **av)
{
	if (ac != 2)
		return (write(1,"\n",1));
	int	x = ft_atoi(av[1]);
	int	i = 2;
	int first = 1;

	if (x == 1)
		ft_putnbr(x);
	while (i <= x)
	{
		if (x % i == 0)
		{
			if (!first)
				write(1,"*",1);
			x = x / i;
			first = 0;
			ft_putnbr(i);
		}
		else
			i++;
	}
	write(1,"\n",1);

}
