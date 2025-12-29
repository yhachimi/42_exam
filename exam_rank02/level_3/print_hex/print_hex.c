#include "unistd.h"


int	ft_atoi(char *str)
{
	int res,i,sign;
	res = 0; i = 0; sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i]  <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = str[i] == '-' ? -sign :sign;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}

void	print_hex(char *str, int nb)
{
	if (!str)
		return;
	if (nb > 16)
		print_hex(str, nb / 16);
	write(1,&str[nb % 16],1);
}
int main(int ac, char **av)
{
	if (ac == 2)
		print_hex("0123456789abcdef",ft_atoi(av[1]));
	write(1,"\n",1);
}
