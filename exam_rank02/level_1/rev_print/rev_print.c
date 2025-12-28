#include "unistd.h"
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
void ft_putstr(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		write(1,&str[i],1);
		i--;
	}
	write(1,&str[i],1);
}

int main(int ac, char **av)
{
	if (ac < 2)
		return (write(1,"\n",1));
	ft_putstr(av[1]);
	write(1,"\n",1);
}
