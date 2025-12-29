#include "unistd.h"

void	low_all_case(char **str)
{
	int	i;

	i = 0;
	if (!str || !*str)
		return ;
	char *s = *str;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac < 2)
		return (write(1,"\n",1));
	int	i = 1;
	int	j = 0;
	while (i < ac)
	{
		low_all_case(&av[i]);
		i++;
	}
	i = 1;
	while (i < ac)
	{
		if (av[i][0] >= 'a' && av[i][0] <= 'z')
			av[i][0] -= 32;
		i++;
	}
	j = 1;
	while (j  < ac)
	{
		i = 0;
		while (av[j][i])
		{
			if ((av[j][i + 1] == ' ' && (av[j][i] >= 'a' && av[j][i] <= 'z')) || (av[j][i + 1] == '\0' && (av[j][i] >= 'a' && av[j][i] <= 'z')))
				av[j][i] -= 32;
			write(1,&av[j][i],1);
			i++;
		}
		write(1,"\n",1);
		j++;
	}
}
