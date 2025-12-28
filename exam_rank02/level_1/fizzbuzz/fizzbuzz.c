#include "unistd.h"
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}

void ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + 48);
}

int main()
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzbuzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
}
