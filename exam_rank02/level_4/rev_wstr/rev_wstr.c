#include "unistd.h"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (write(1,"\n",1));
	int	i = 0;
	int	start;
	
	while (av[1][i])
		i++;
	while (i > 0 && av[1][i] != ' ')
		i--;
	while (i > 0)
	{
		start = i + 1;
		while (av[1][start] && av[1][start] != ' ')
		{
			write(1,&av[1][start],1);
			start++;
		}
		while (av[1][i] == ' ' )
			i--;
		if (av[1][i])
			write(1," ",1);
		while (av[1][i] != ' ')
			i--;
	}
	i = 0;
	while (av[1][i] && av[1][i] != ' ')
	{
		write(1,&av[1][i],1);
		i++;
	}
	write(1,"\n",1);
}
