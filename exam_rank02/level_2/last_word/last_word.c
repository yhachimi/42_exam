#include "unistd.h"

int is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))  
		return (1);
	return (0);
}

int main(int ac,char **av)
{
	int i;

	i = 0;
	if (ac != 2)
		return (write(1,"\n",1));
	while (av[1][i])
		i++;
	i--;
	while (i > 0 && is_space(av[1][i]))
		i--;
	i--;
	while (i > 0 && !is_space(av[1][i]))
		i--;
	++i;
	while (av[1][i] && !is_space(av[1][i]))
	{
		write(1,&av[1][i],1);
		i++;
	}
	write(1,"\n",1);
}
