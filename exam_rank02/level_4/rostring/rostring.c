#include "unistd.h"

int main(int ac,char **av)
{
	if (ac < 2)
		return (write(1,"\n",1),1);
	int	i = 0;
	int check = 0;
	while (av[1][i]  && av[1][i] == ' ')
		i++;
	while (av[1][i] && av[1][i] != ' ')
		i++;
	if (av[1][i])
		++i;
	while (av[1][i])
	{
		while (av[1][i] && av[1][i] != ' ')
		{
			write(1,&av[1][i],1);
			check = 1;
			i++;
		}
		while ( av[1][i] && av[1][i] == ' ')
                	i++;
		if (av[1][i])
			write(1," ",1);
	}
	i = 0;
	while ( av[1][i] && av[1][i] == ' ')
                i++;
	if (check == 1)
		write(1," ",1);
	while (av[1][i] && av[1][i] != ' ')
	{
		write(1,&av[1][i],1);
		i++;
	}
	write(1,"\n",1);

}
