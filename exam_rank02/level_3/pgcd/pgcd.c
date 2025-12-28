#include "unistd.h"

int ft_atoi(char *str)
{
	int	i = 0;
	int	res = 0;
	int sign = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
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
	if (nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	char c;
	c = nb % 10 + 48;
	write(1,&c,1);
}
int	hcm(int a, int b)
{
	int l;

	if (!a || !b)
		return (0);
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	while (b > 0)
	{
		l = b;
		b = a % b;
		a = l;
	}
	return (a);
}
int main(int ac, char **av)
{
	if (ac != 3)
		return (write(1,"\n",1));
	int a = ft_atoi(av[1]);
	int b = ft_atoi(av[2]);
	int hm = hcm(a,b);
	ft_putnbr(hm);
	write(1,"\n",1);

}
